#include <stdio.h>
#include <math.h>

int main()
{
	float x;

	scanf("%f", &x);

	if(x >= 0.0)
		printf("f(%.2f) = %.2f\n", x, sqrt(x));
	else
		printf("f(%.2f) = %.2f\n", x, pow(x + 1, 2) + 2 * x + 1 / x);

	return 0;
}