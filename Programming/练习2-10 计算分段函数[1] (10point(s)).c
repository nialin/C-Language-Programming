#include <stdio.h>

int main()
{
	float i;

	scanf("%f", &i);

	if(i == 0.0f)
		printf("f(%.1f) = 0.0\n", i);
	else
		printf("f(%.1f) = %.1f\n", i, 1 / i);

	return 0;
}