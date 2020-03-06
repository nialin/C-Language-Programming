#include <stdio.h>

int main()
{
	int i, n, sign = 1;
	double sum = 0;

	scanf("%d", &n);

	for(i = 0; i < n; ++i, sign *= -1)
		sum += sign * 1.0 / (i * 3 + 1);

	printf("sum = %.3f", sum);

	return 0;
}