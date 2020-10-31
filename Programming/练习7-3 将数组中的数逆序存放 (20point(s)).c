#include <stdio.h>

int main()
{
	int i, n, tmp, nums[10];

	scanf("%d", &n);

	for(i = 0; i < n; ++i)
		scanf("%d", &nums[i]);

	for(i = 0; i < n / 2; ++i) {
		tmp = nums[i];
		nums[i] = nums[n - 1 - i];
		nums[n - 1 - i] = tmp;
	}

	for(i = 0; i < n; ++i)
		printf("%s%d", i ? " " : "", nums[i]);

	printf("\n");

	return 0;
}
