#include <stdio.h>


int main()
{
	int x, x1, x2, x3, cnt = 0;

	scanf("%d", &x);

	for(x1 = x / 5; x1; --x1)
		for(x2 = x / 2; x2; --x2)
			for(x3 = x; x3; --x3)
				if(5 * x1 + 2 * x2 + x3 == x) {
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", x1, x2, x3, x1 + x2 + x3);
					++cnt;
				}

	printf("count = %d\n", cnt);

	return 0;
}
