#include <stdio.h>

int num_find(int *nums, int cnt, int n);

int num_find(int *nums, int cnt, int n)
{
	int i;

	for(i = 0; i < cnt && n != nums[i]; ++i)
		;

#if 0
	return n == nums[i];
#else
	return i < cnt;
#endif
}

int main()
{
	int i, j, cnt_1, cnt_2, nums_1[20], nums_2[20], rslt[40], rcnt = 0;

	for(i = 0, scanf("%d", &cnt_1); i < cnt_1; ++i)
		scanf("%d", &nums_1[i]);

	for(i = 0, scanf("%d", &cnt_2); i < cnt_2; ++i)
		scanf("%d", &nums_2[i]);

	for(i = 0; i < cnt_1; ++i) {
		for(j = 0; j < cnt_2 && nums_1[i] != nums_2[j]; ++j)
			;

		if(nums_1[i] != nums_2[j] && !num_find(rslt, rcnt, nums_1[i]))
			rslt[rcnt++] = nums_1[i];
	}

	for(i = 0; i < cnt_2; ++i) {
		for(j = 0; j < cnt_1 && nums_2[i] != nums_1[j]; ++j)
			;

		if(nums_2[i] != nums_1[j] && !num_find(rslt, rcnt, nums_2[i]))
			rslt[rcnt++] = nums_2[i];
	}

	for(i = 0; i < rcnt; ++i)
		printf("%s%d", i ? " " : "", rslt[i]);

	printf("\n");

	return 0;
}
