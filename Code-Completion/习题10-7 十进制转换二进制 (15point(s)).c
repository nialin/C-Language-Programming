#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin( int n )
{
	int i, nums[32], top;

	if(0 == n)
		printf("0");

	for(i = 0, top = 0; n; ++i, n >>= 1)
		nums[top++] = n & 1;

	while(top)
		printf("%d", nums[--top]);

	printf("\n");
}
