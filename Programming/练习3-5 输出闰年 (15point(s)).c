#include <stdio.h>

int main()
{
	int i, year, cnt = 0;

	scanf("%d", &year);

	if(year < 2001 || year > 2100)
		printf("Invalid year!\n");
	else {
		for(i = 2004; i <= year; i += 4) {
			if((!(i % 4) && (i % 100)) || !(i % 400)) {
				printf("%d\n", i);
				++cnt;
			}
		}

		if(0 == cnt)
			printf("None\n");
	}

	return 0;
}