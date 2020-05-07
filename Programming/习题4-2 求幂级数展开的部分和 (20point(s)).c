#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double x, rslt = 0, factorial = 1;

	scanf("%lf", &x);

	for(i = 0; pow(x, i) / factorial >= 0.00001; factorial *= ++i)
		rslt += pow(x, i) / factorial;

	rslt += pow(x, i) / factorial;

	printf("%.4lf\n", rslt);

	return 0;
}
