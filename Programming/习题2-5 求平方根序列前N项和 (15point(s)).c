#include <stdio.h>
#include <math.h>

int main()
{
	int i, n;
	double sum = 0;

	scanf("%d", &n);

	for(i = 1; i <= n; ++i)
		sum += sqrt(i);

	printf("sum = %.2f\n", sum);

	return 0;
}