#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	int i, cnts[4] = {0};

	for(i = 0; i < 10; ++i) {
		c = getchar();

		if(isalpha(c))
			++cnts[0];
		else if(' ' == c || '\n' == c)
			++cnts[1];
		else if(isdigit(c))
			++cnts[2];
		else
			++cnts[3];
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d\n", cnts[0], cnts[1], cnts[2], cnts[3]);

	return 0;
}