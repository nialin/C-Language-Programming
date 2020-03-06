#include <stdio.h>

int main()
{
	int i, n, score, sum = 0, cnt = 0;

	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		scanf("%d", &score);
		sum += score;

		if(score >= 60)
			++cnt;
	}

	if(n)
		printf("average = %.1f\ncount = %d\n", (float)sum / n, cnt);
	else
		printf("average = 0.0\ncount = 0\n");

	return 0;
}