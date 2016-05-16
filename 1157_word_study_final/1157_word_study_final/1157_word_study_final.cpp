#include <cstdio>
int cnt[30];
int main()
{
	int i, max1 = -1, max2, idx;
	char c;
	while (scanf("%1c", &c) == 1)
	{
		if (c == '\n' || c == EOF)
			break;
		if (c >= 'a')
			cnt[c - 'a']++;
		else
			cnt[c - 'A']++;
	}

	for (i = 0; i < 26; i++)
	{
		if (max1 <= cnt[i])
		{
			max2 = max1;
			max1 = cnt[i];
			idx = i;
		}
	}

	printf("%c", max1 == max2 ? '?' : idx + 'A');
}