#include <stdio.h>

int main()
{
	int i, j, m, n, sum, tmp;

	scanf("%d%d", &m, &n);

	for(i = 0; i < m; ++i) {
		for(j = 0, sum = 0; j < n; ++j) {
			scanf("%d", &tmp);
			sum += tmp;
		}

		printf("%d\n", sum);
	}

	return 0;
}
