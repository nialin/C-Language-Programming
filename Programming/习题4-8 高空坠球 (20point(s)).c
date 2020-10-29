#include <stdio.h>

int main()
{
	long long i, high, n;
	double sum = 0, up, down;

	scanf("%lld%lld", &high, &n);

	for(i = 0, up = 0, down = high; i < n; ++i) {
		sum += up + down;
		up = (double)down / 2;
		down = up;
	}

	printf("%.1f %.1f\n", sum, up);

	return 0;
}
