#include <stdio.h>

int main()
{
	int i, n, sum = 1;

	scanf("%d", &n);

	for(i = n; i > 1; --i)
		sum = (sum + 1) * 2;

	printf("%d\n", sum);

	return 0;
}
