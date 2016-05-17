#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int a[3], b[3];
	int k[2];
	int result;
	char index;
	cin >> a[0] >> index >> a[1] >> index >> a[2];
	cin >> b[0] >> index >> b[1] >> index >> b[2];
	k[0] = a[0] * 3600 + a[1] * 60 + a[2];
	k[1] = b[0] * 3600 + b[1] * 60 + b[2];
	result = k[1] - k[0];
	if (result <= 0)  result += 24 * 3600;
	printf("%02d:%02d:%02d", result / 3600, (result % 3600) / 60, result % 60);
}