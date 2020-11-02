#include <stdio.h>
#include <stdlib.h>

int main()
{
	size_t len;
	int i, index = -1;
	char tar, *line = NULL;

	scanf("%c\n", &tar);

	getline(&line, &len, stdin);

	for(i = 0; i < len; ++i)
		if(tar == line[i])
			index = i;

	if(-1 == index)
		printf("Not Found\n");
	else
		printf("index = %d\n", index);

	free(line);
	
	return 0;
}
