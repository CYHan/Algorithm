#include <stdio.h>
#include <Winsock2.h>
#include <stdlib.h>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define SA        struct sockadder
#define MAXLINE 4096
#define MAXSUB 200



int process_http(int sockfd, char *host, char *page, char *poststr, char*response);



int send_post(char * params, char* response) {
	char *hname = "http";
	char *page = "/";

	int iResult;
	WSADATA wsaData;

	SOCKET ConnectSocket = INVALID_SOCKET;
	struct sockaddr_in clientService;

	int recvbuflen = MAXLINE;
	char *sendbuf = "Client : sending data test";
	char recvbuf[MAXLINE] = "";


	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != NO_ERROR) {
		return -1;
	}

	ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (ConnectSocket == INVALID_SOCKET) {
		int error = WSAGetLastError();
		WSACleanup();
		return error;
	}
	clientService.sin_family = AF_INET;
	clientService.sin_addr.s_addr = inet_addr("123.123.123.123");
	clientService.sin_port = htons(8080);

	iResult = connect(ConnectSocket, (SOCKADDR*)&clientService, sizeof(clientService));
	if (iResult == SOCKET_ERROR) {
		int error = WSAGetLastError();
		closesocket(ConnectSocket);
		WSACleanup();
		return error;
	}
	printf("Bytes Sent : %n", iResult);

	if (0 > process_http(ConnectSocket, hname, page, params, response)) {
		int error = WSAGetLastError();
		closesocket(ConnectSocket);
		WSACleanup();
		return error;
	}

	iResult = closesocket(ConnectSocket);
	if (iResult == SOCKET_ERROR) {
		int error = WSAGetLastError();
		WSACleanup();
		return error;
	}
	WSACleanup();

	return 0;
}

int main() {

	char *poststr = "mode=login&user=test&passward=test\r\n";
	char response[4096];

	int result = send_post(poststr,response);
	printf(" #### RESPONSE ####\n%s\n", response);
	return result;
}

int process_http(int sockfd, char *host, char *page, char *poststr, char*response) {
	char sendline[MAXLINE + 1], recvline[MAXLINE + 1];
	size_t n;
	sprintf_s(sendline, MAXSUB,
		"POST %s HTTP/1.0\r\n"
		"Host : %s\r\n"
		"Content-type : application/x-www-form-urlencoded\r\n"
		"Content-length: %d\r\n\r\n"
		"%s", page, host, (int)strlen(poststr), poststr);
	int iResult = send(sockfd, sendline, strlen(sendline), 0);
	if (iResult == SOCKET_ERROR) {
		return -1;
	}
	iResult = shutdown(sockfd, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		return -1;
	}

	int offset = 0;
	while ((n = recv(sockfd, recvline, MAXLINE, 0)) > 0) {
		recvline[n] = '\0';
		strcpy(response+offset, recvline);
		offset += n;

		if (offset < 0) break;
	}
	return offset;
}