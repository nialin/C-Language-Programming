#include <stdio.h>

int main()
{
	int days[13] = {
		0, 31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	}, i, year, month, day, sum;

	scanf("%d/%d/%d", &year, &month, &day);

	for(i = 0, sum = 0; i < month; ++i)
		sum += days[i];

	if((!(year % 4) && year % 100) || !(year % 400)) {
		if(2 == month && 29 == day)
			printf("60\n");
		else if(month >= 3)
			printf("%d\n", sum + day + 1);
		else
			printf("%d\n", sum + day);
	}
	else
		printf("%d\n", sum + day);

	return 0;
}
