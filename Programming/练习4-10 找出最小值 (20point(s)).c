#include <stdio.h>
#include <limits.h>

int main()
{
	int i, j, n, min = INT_MAX;

	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		scanf("%d", &j);

		if(j < min)
			min = j;
	}

	printf("min = %d\n", min);

	return 0;
}