#include <stdio.h>

int main()
{
	int i, n, max_index, nums[10];

	scanf("%d", &n);

	for(i = 0, max_index = 0; i < n; ++i) {
		scanf("%d", &nums[i]);

		if(nums[i] > nums[max_index])
			max_index = i;
	}

	printf("%d %d\n", nums[max_index], max_index);

	return 0;
}
