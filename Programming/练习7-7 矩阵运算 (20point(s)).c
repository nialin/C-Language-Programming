#include <stdio.h>

int main()
{
	int i, j, n, sum, tmp;

	scanf("%d", &n);

	for(sum = 0, i = 0; i < n - 1; ++i) {
		for(j = 0; j < n; ++j) {
			scanf("%d", &tmp);

			if(j != n - 1 && j != n - 1 - i)
				sum += tmp;
		}
	}

	printf("%d\n", sum);

	return 0;
}
