#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_cmp(const void *a, const void *b);

int str_cmp(const void *a, const void *b)
{
	return strcmp(*(char **)a, *(char **)b);
}

int main()
{
	int i;
	char *strs[5];

	for(i = 0; i < 5; ++i) {
		if(!(strs[i] = malloc(81 * sizeof(char))))
			exit(1);

		scanf("%s", strs[i]);
	}

	qsort(strs, 5, sizeof(char *), str_cmp);

	printf("After sorted:\n");

	for(i = 0; i < 5; ++i) {
		printf("%s\n", strs[i]);

		free(strs[i]);
	}

	return 0;
}
