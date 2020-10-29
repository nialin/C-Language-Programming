#include <stdio.h>


int gcd(int m , int n);


int gcd(int m , int n)
{
	if(0 == m % n)
		return n;

	return gcd(n, m % n);
}

int main()
{
	int m, n, rslt;

	scanf("%d%d",&m, &n);

	rslt = gcd(m, n);

	printf("%d %d\n", rslt, m * n / rslt);

	return 0;
}
