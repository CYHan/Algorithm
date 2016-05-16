#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	char a[10];
	scanf("%s", a);

	int num[10] = { 0, };
	int len = strlen(a);

	for (int i = 0; i<len; ++i) {
		num[a[i] - '0']++;
	}

	num[6] = (num[6] + num[9]) / 2 + (num[6] + num[9]) % 2;
	num[9] = 0;


	int ans = 0;
	for (int i = 0; i<10; ++i)
		ans = max(num[i], ans);

	printf("%d\n", ans);

	return 0;
}