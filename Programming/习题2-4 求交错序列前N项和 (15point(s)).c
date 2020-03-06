#include <stdio.h>

int main()
{
	int i, n, sign = 1;
	double sum = 0;

	scanf("%d", &n);

	for(i = 1; i <= n; ++i, sign *= -1)
		sum += sign * (double)i / (2 * i - 1);

	printf("%.3f\n", sum);

	return 0;
}