#include <stdio.h>
#include <stdlib.h>

struct stu_info {
	char name[11], tel[18];
	int brithday;
};

int stu_cmp(const void *a, const void *b)
{
	return ((struct stu_info *)a)->brithday - ((struct stu_info *)b)->brithday;
}

int main()
{
	int i, n;
	struct stu_info stus[10];

	scanf("%d", &n);

	for(i = 0; i < n; ++i)
		scanf("%s%d%s", stus[i].name, &stus[i].brithday, stus[i].tel);

	qsort(stus, n, sizeof(struct stu_info), stu_cmp);

	for(i = 0; i < n; ++i)
		printf("%s %d %s\n", stus[i].name, stus[i].brithday, stus[i].tel);

	return 0;
}
