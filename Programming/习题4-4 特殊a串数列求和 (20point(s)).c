#include <stdio.h>

int main()
{
	long long i, tmp, a, n, sum;

	scanf("%lld%lld", &a, &n);

	for(i = 0, sum = 0, tmp = 0; i < n; ++i) {
		tmp *= 10;
		tmp += a;
		sum += tmp;
	}

	printf("s = %lld\n", sum);

	return 0;
}
