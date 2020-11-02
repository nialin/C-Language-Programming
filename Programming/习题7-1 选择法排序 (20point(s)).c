#include <stdio.h>
#include <stdlib.h>

int nums_cmp(const void *a, const void *b);

int nums_cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main()
{
	int i, len, nums[10];

	for(i = 0, scanf("%d", &len); i < len; ++i)
		scanf("%d", &nums[i]);

	qsort(nums, len, sizeof(int), nums_cmp);

	for(i = 0; i < len; ++i)
		printf("%s%d", i ? " " : "", nums[i]);

	printf("\n");

	return 0;
}
