#include <stdio.h>

int main()
{
	int i, n, nums[3] = {1, 1};

	scanf("%d", &n);

	if(1 == n)
		printf("1\n");
	else {
		for(i = 1; nums[i % 3] < n; ++i)
			nums[(i + 1) % 3] = nums[i % 3] + nums[(i - 1) % 3];

		printf("%d\n", i + 1);
	}

	return 0;
}
