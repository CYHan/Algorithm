#include <cstdio>

char s[1000001], t[44], r[1000001];

int main()
{
	int i, j, n, m = 0;
	scanf("%s%s", s, t);
	for (n = 0; t[n]; n++);
	for (i = 0; s[i]; i++)
	{
		r[m++] = s[i];
		if (m >= n)
		{
			for (j = 0; j < n; j++) if (r[j + m - n] != t[j]) break;
			if (j == n) m -= n;
		}
	}
	r[m] = 0;
	puts(m ? r : "FRULA");
}