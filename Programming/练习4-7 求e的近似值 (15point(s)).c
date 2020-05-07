#include <stdio.h>

int main()
{
	int i, n;
	double e, item;

	scanf("%d", &n);

	for(i = 1, e = 1, item = 1.0; i <= n; ++i) {
		item  /= i;
		e += item;
	}

	printf("%.8lf\n", e);

	return 0;
}