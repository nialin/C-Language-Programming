#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int i, nums[3];

	for(i = 0; i < 3; ++i)
		scanf("%d", &nums[i]);

	qsort(nums, 3, sizeof(int), cmp);

	for(i = 0; i < 3; ++i)
		printf("%s%d", i ? "->" : "", nums[i]);

	printf("\n");

	return 0;
}