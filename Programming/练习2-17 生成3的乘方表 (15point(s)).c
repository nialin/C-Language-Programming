#include <stdio.h>

int main()
{
	int i, j, n;
	long rslt;

	scanf("%d", &n);

	for(i = 0; i <= n; ++i) {
		for(j = 0, rslt = 1; j < i; ++j)
			rslt *= 3;

		printf("pow(3,%d) = %ld\n", i, rslt);
	}

	return 0;
}