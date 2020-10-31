#include <stdio.h>

int main()
{
	char oper;
	int num_1, num_2, flg = 1;

	for(scanf("%d", &num_1); scanf("%c", &oper) && oper != '=' && flg; ) {
		scanf("%d", &num_2);

		switch(oper) {
			case '+' :
				num_1 += num_2;
				break;

			case '-' :
				num_1 -= num_2;
				break;

			case '*' :
				num_1 *= num_2;
				break;

			case '/' :
				if(0 == num_2)
					flg = 0;
				else
					num_1 /= num_2;
				break;

			default:
				flg = 0;
		}
	}

	if(flg)
		printf("%d\n", num_1);
	else
		printf("ERROR\n");

	return 0;
}
