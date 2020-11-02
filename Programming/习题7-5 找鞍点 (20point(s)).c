#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, n, matrix[6][6], max_val[6], min_val[6];

	scanf("%d", &n);

	memset(max_val, 	0, 			sizeof(max_val));
	memset(min_val, 	0x7F, 		sizeof(min_val));

	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			scanf("%d", &matrix[i][j]);

			if(max_val[i] < matrix[i][j])
				max_val[i] = matrix[i][j];

			if(min_val[j] > matrix[i][j])
				min_val[j] = matrix[i][j];
		}
	}

	for(i = 0; i < n; ++i) {
		for(j = 0; j < n && max_val[i] != min_val[j]; ++j)
			;

		if(j < n)
			break;
	}

	if(i < n)
		printf("%d %d\n", i, j);
	else
		printf("NONE\n");

	return 0;
}
