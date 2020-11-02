#include <stdio.h>

int is_upper_triangle(void);

int is_upper_triangle(void)
{
	int i, j, n, tmp, rslt = 1;

	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			scanf("%d", &tmp);

			if(j < i && tmp)
				rslt = 0;
		}
	}

	return rslt;
}

int main()
{
	int i, t;

	scanf("%d", &t);

	for(i = 0; i < t; ++i)
		printf("%s\n", is_upper_triangle() ? "YES" : "NO");

	return 0;
}
