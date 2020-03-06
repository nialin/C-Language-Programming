#include <stdio.h>
#include <math.h>

int main()
{
	int i, m, n;
	double sum = 0;

	scanf("%d%d", &m, &n);

	for(i = m; i <= n; ++i)
		sum += pow(i, 2) + 1.0 / i;

	printf("sum = %.6f\n", sum);

	return 0;
}