#include <stdio.h>

void print_result(int times)
{
	if(1 == times)
		printf("Bingo!\n");
	else if(times <= 3)
		printf("Lucky You!\n");
	else
		printf("Good Guess!");
}

int main()
{
	int i, tar, n, num;

	scanf("%d%d", &tar, &n);

	for(i = 1; i <= n; ++i) {
		scanf("%d", &num);

		if(num < 0) {
			printf("Game Over\n");
			break;
		}

		if(num == tar) {
			print_result(i);
			break;
		}

		if(num < tar)
			printf("Too small\n");
		else
			printf("Too big\n");
	}

	if(i > n)
		printf("Game Over\n");

	return 0;
}
