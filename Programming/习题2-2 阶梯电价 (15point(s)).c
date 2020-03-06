#include <stdio.h>

int main()
{
	double usage;

	scanf("%lf", &usage);

	if(usage < 0.0)
		printf("Invalid Value!\n");
	else if(usage < 50)
		printf("cost = %.2f\n", usage * 0.53);
	else
		printf("cost = %.2f\n", 50 * 0.53 +(usage - 50) * 0.58);

	return 0;
}