#include <stdio.h>

int main()
{
	int hour, minute, second, delta;

	scanf("%d:%d:%d", &hour, &minute, &second);
	scanf("%d", &delta);

	delta += second;
	second = delta % 60;

	delta = delta / 60 + minute;
	minute = delta % 60;

	delta = delta / 60 + hour;
	hour = delta % 24;

	printf("%02d:%02d:%02d\n", hour, minute, second);

	return 0;
}
