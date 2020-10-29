#include <stdio.h>

int abs(int a);

int abs(int a)
{
	return a > 0 ? a : -a;
}

int main()
{
	int i, j, cnt, m, n;

	scanf("%d", &n);
	m = (n - 1) / 2;

	for(i = 0; i < n; ++i) {
		for(j = 0, cnt = abs(i - m) * 2; j < cnt; ++j)
			printf(" ");

		for(j = 0, cnt = (m - abs(i - m)) * 2 + 1; j < cnt; ++j)
			printf("* ");

		printf("\n");
	}

	return 0;
}
