#include <stdio.h>

int main()
{
	char ch;
	int i, n, map[10] = {0}, max_time = 0;

	scanf("%d\n", &n);

	while(scanf("%c", &ch), ch != '\n')
		if(ch >= '0' && ch <= '9')
			++map[ch - '0'];

	for(i = 0; i < 10; ++i)
		if(max_time < map[i])
			max_time = map[i];

	printf("%d:", max_time);

	for(i = 0; i < 10; ++i)
		if(max_time == map[i])
			printf(" %d", i);

	printf("\n");

	return 0;
}
