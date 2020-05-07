#include <stdio.h>

int main()
{
	int sum = 0, n;

	while(scanf("%d", &n) != EOF && n > 0)
		if(n % 2)
			sum += n;

	printf("%d\n", sum);

	return 0;
}