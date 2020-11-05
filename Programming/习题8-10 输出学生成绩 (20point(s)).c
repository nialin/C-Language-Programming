#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int i, n, *scores, sum , min_score = INT_MAX, max_score = INT_MIN;

	scanf("%d", &n);

	if(!(scores = malloc(n * sizeof(int))))
		exit(1);

	for(i = 0, sum = 0; i < n; ++i) {
		scanf("%d", &scores[i]);

		if(scores[i] < min_score)
			min_score = scores[i];

		if(scores[i] > max_score)
			max_score = scores[i];

		sum += scores[i];
	}

	printf("average = %.2lf\n", (double)sum / n);
	printf("max = %.2lf\n", (double)max_score);
	printf("min = %.2lf\n", (double)min_score);

	free(scores);

	return 0;
}
