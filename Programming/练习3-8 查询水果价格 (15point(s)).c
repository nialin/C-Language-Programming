#include <stdio.h>

struct fruit {
	char name[10];
	float price;
};

int main()
{
	int i, choice;
	struct fruit fruits[4] = {
		{"apple"	,	3	},
		{"pear"		,	2.5	},
		{"orange"	,	4.1	},
		{"grape"	,	10.2	},
	};

	for(i = 0; i < 4; ++i)
		printf("[%d] %s\n", i + 1, fruits[i].name);

	printf("[0] exit\n");

	for(i = 0; i < 5; ++i) {
		scanf("%d", &choice);

		if(0 == choice)
			break;

		if(choice < 1 || choice > 4)
			printf("price = 0.00\n");
		else
			printf("price = %.2f\n", fruits[choice - 1].price);
	}

	return 0;
}