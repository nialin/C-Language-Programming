#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void printdigits( int n )
{
	int i, nums[11], top;

	if(0 == n)
		printf("0\n");

	for(i = 0, top = 0; n; ++i, n /= 10)
		nums[top++] = n % 10;

	while(top)
		printf("%d\n", nums[--top]);
}
