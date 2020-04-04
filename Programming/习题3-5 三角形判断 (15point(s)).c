#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double p, a, b, c, x[3], y[3];

	for(i = 0; i < 3; ++i)
		scanf("%lf%lf", &x[i], &y[i]);

	a = pow(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2), 0.5);
	b = pow(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2), 0.5);
	c = pow(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2), 0.5);

	p = (a + b + c) / 2;

	if((p - a) * (p - b) * (p - c) <= 0.0)
		printf("Impossible\n");
	else
		printf("L = %.2lf, A = %.2lf\n", p * 2, pow(p * (p - a) * (p - b) * (p - c), 0.5));

	return 0;
}
