#include <stdio.h>
#include <string.h>

int main() {
	char arr[BUFSIZ];
	int tmp[BUFSIZ], cnt[BUFSIZ] = { 0, };
	int i, j;

	scanf("%s", arr);

	for (i = 0; i < strlen(arr); i++)
		tmp[i] = arr[i] - 97;

	for (i = 0; i < strlen(arr); i++)
		for (j = 0; j < 26; j++)
			if (tmp[i] == j)
				cnt[j]++;
	for (i = 0; i < 26; i++)
		printf("%d ", cnt[i]);
	printf("\n");

	return 0;
}