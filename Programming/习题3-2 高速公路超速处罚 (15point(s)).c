#include <stdio.h>

int main()
{
	float speed, standard;

	scanf("%f%f", &speed, &standard);

	if(speed < standard * 1.1)
		printf("OK\n");
	else if(speed < standard * 1.5)
		printf("Exceed %.0f%%. Ticket 200\n", ((speed - standard) * 100 / standard));
	else
		printf("Exceed %.0f%%. License Revoked\n", ((speed - standard) * 100 / standard));

	return 0;
}