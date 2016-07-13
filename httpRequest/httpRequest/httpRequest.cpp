#include <stdio.h>
#include <Winsock2.h>

#define SA        struct sockadder
#define MAXLINE 4096
#define MAXSUB 200

int send_post(char * params, char* response) {
	char *hname = "cyh1704.dothome.co.kr";
	char *page = "/test/test/php";

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
	clientService.sin_addr.s_addr = inet_addr("123,123,123,123");
	clientService.sin_port = htons( 8080 );

	iResult = connect( ConnectSocket, (SOCKADDR))
}