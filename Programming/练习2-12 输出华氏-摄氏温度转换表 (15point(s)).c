#include <stdio.h>

int main()
{
	int i, lower, upper;

	scanf("%d%d", &lower, &upper);

	if(lower > upper)
		printf("Invalid.\n");
	else {
		printf("fahr celsius\n");

		for(i = lower; i <= upper; i += 2)
			printf("%d %5.1f\n", i, 5 * ((float)i - 32) / 9);
	}

	return 0;
}