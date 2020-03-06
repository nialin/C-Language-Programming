#include <stdio.h>

int main()
{
	int i, j, sum;

	for(sum = 0, i = 0; i < 4; ++i) {
		scanf("%d", &j);

		sum += j;
	}

	printf("Sum = %d; Average = %.1f\n", sum, sum / 4.0);

	return 0;
}