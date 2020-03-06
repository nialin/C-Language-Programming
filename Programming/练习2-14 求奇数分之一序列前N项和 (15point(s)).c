#include <stdio.h>

int main()
{
	int i, n;
	double sum = 0;

	scanf("%d", &n);

	for(i = 0; i < n; ++i)
		sum += 1.0 / (i * 2 + 1);

	printf("sum = %.6f", sum);

	return 0;
}