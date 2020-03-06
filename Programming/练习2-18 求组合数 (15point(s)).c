#include <stdio.h>

long long fact(int n)
{
	int i;
	double rslt = 1;

	for(i = 1; i <= n; ++i)
		rslt *= i;

	return rslt;
}

int main()
{
	int m, n;

	scanf("%d%d", &m, &n);

	printf("result = %lld\n", fact(n) / fact(m) / fact(n - m));

	return 0;
}