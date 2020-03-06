#include <stdio.h>

int main()
{
	int i, n, score, cnts[5] = {0};

	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		scanf("%d", &score);

		if(score >= 90)
			++cnts[0];
		else if(score >= 80)
			++cnts[1];
		else if(score >= 70)
			++cnts[2];
		else if(score >= 60)
			++cnts[3];
		else
			++cnts[4];
	}

	for(i = 0; i < 5; ++i)
		printf("%s%d", i ? " " : "", cnts[i]);

	printf("\n");

	return 0;
}