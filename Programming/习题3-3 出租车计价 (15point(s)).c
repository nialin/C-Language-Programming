#include <stdio.h>

int main()
{
	int wait;
	float len, price = 0;

	scanf("%f%d", &len, &wait);

	if(len <= 3)
		price = 10;
	else if(len <= 10)
		price = 10 + (len - 3) * 2;
	else
		price = 24 + (len - 10) * 3;

	price += wait / 5 * 2;

	printf("%.0f\n", price);

	return 0;
}