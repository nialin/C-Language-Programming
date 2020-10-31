#include <stdio.h>

int main()
{
	int i;
	char str[1024];

	for(i = 0; scanf("%s", str) != EOF; ++i)
		;

	printf("%d\n", i);

	return 0;
}
