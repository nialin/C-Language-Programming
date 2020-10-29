#include <stdio.h>

#define unlikly(x) __builtin_expect(!!(x), 0)

int my_pow(int base, int index)
{
	int i, rslt = 1;

	for(i = 0; i < index; ++i)
		rslt *= base;

	return rslt;
}

int is_narcissus(int n)
{
	int i, cnt, tmp, sum, buffer[7];

	for(cnt = 0, tmp = n; tmp; ++cnt, tmp /= 10)
		buffer[cnt] = tmp % 10;

	for(sum = 0, i = 0; i < cnt; ++i)
		sum += my_pow(buffer[i], cnt);

	return sum == n;
}

int main()
{
	int i, n;

	scanf("%d", &n);

	for(i = my_pow(10, n - 1); i < my_pow(10, n) - 1; ++i)
		if(unlikly(is_narcissus(i)))
			printf("%d\n", i);

	return 0;
}
