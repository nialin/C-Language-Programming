#include <stdio.h>

void array_reverse(int *nums, int cnt);

void array_reverse(int *nums, int cnt)
{
	int i, tmp;

	for(i = 0; i < cnt / 2; ++i) {
		tmp = nums[i];
		nums[i] = nums[cnt - 1 - i];
		nums[cnt - 1 - i] = tmp;
	}
}

int main()
{
	int m, n, i, j, line[6];

	scanf("%d%d", &m, &n);

	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j)
			scanf("%d", &line[j]);

		array_reverse(line, n - m % n);
		array_reverse(&line[n - m % n], m % n);
		array_reverse(line, n);

		for(j = 0; j < n; ++j)
			printf("%d ",line[j]);

		printf("\n");
	}

	return 0;
}
