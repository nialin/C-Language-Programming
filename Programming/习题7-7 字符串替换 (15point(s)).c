#include <stdio.h>

int main()
{
	char ch;

	while((ch = getchar()) != '\n') {
		if(ch >= 'A' && ch <= 'Z')
			ch = 'Z' - (ch - 'A');

		putchar(ch);
	}

	printf("\n");

	return 0;
}
