#include <stdio.h>

int main()
{
	int i, sign = 1;
	double eps, sum = 0;

	scanf("%lf", &eps);

	for(i = 1; 1.0 / i > eps; i += 3, sign *= -1)
		sum += 1.0 / i * sign;

	sum += 1.0 / i * sign;
	printf("sum = %.6lf\n", sum);

	return 0;
}
