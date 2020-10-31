#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reverse(char *str);

void str_reverse(char *str)
{
	char tmp;
	size_t i, len = strlen(str) - 1;

	for(i = 0; i < len / 2; ++i) {
		tmp = str[i];
		str[i] = str[len - 1- i];
		str[len - 1 - i] = tmp;
	}
}

int main()
{
	size_t len;
	char *line = NULL;

	getline(&line, &len, stdin);
	str_reverse(line);

	printf("%s", line);

	free(line);

	return 0;
}
