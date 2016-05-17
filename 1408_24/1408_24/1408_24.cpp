#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char first[10];
	char second[10];
	cin >> first;
	cin >> second;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < strlen(first); i++) {
		if (first[i] != ':')
			first[count1++] = first[i];
	}
	for (int i = 0; i < strlen(second); i++) {
		if (second[i] != ':')
			second[count2++] = second[i];
	}
	int sum1 = 0;
	int sum2 = 0;
	int sub = 0;
	sum1 = first[0] * 10 * 3600 + first[1] * 3600 + first[2] * 10 * 60 + first[3] * 60 + first[4] * 10 + first[5];
	sum2 = second[0] * 10 * 3600 + second[1] * 3600 + second[2] * 10 * 60 + second[3] * 60 + second[4] * 10 + second[5];
	sub = sum2 - sum1;
	if (sub < 0) {
		sub = 3600 * 24 + sub;
		
	}

	printf("%02d:%02d:%02d", sub / 3600, (sub % 3600) / 60, (sub % 3600) % 60);
	return 0;
}