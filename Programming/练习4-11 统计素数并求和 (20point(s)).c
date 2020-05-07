#include <stdio.h>

int is_prime(int n)
{
	int i;

	if(2 == n)
		return 1;

	if(0 == n % 2 || n < 2)
		return 0;

	for(i = 3; i <= n / 3; i += 2)
		if(0 == n % i)
			return 0;

	return 1;
}

int main()
{
	int i, m, n, prime_cnt, sum;

	scanf("%d%d", &m, &n);

	for(i = m, prime_cnt = 0, sum = 0; i <= n; ++i) {
		if(is_prime(i)) {
			++prime_cnt;

			sum += i;
		}
	}

	printf("%d %d\n", prime_cnt, sum);

	return 0;
}