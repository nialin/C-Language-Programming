#include <stdio.h>

long long fact(int n)
{
	int i;
	long long fact = 1;

	for(i = 1; i <= n; ++i)
		fact *= i;

	return fact;
}

int main()
{
	int i, n;
	long long sum = 0;

	scanf("%d", &n);

	for(i = 1; i <= n; ++i)
		sum += fact(i);

	printf("%lld\n", sum);

	return 0;
}
