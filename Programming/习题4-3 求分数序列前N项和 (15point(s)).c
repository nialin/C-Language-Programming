#include <stdio.h>

int main()
{
	int i, n;
	double sum = 0, numerator = 2, denominator = 1, tmp;

	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		sum += numerator / denominator;

		tmp = numerator;
		numerator = numerator + denominator;
		denominator = tmp;
	}

	printf("%.2lf\n", sum);

	return 0;
}
