#include <stdio.h>

struct book_info {
	double price;
	char name[31];
};

int main()
{
	int i, n, min_index, max_index;
	struct book_info books[10];

	scanf("%d", &n);

	for(i = 0, min_index = max_index = 0; i < n; ++i) {
		getchar();
		gets(books[i].name);
		scanf("%lf", &books[i].price);

		if(books[i].price < books[min_index].price)
			min_index = i;

		if(books[i].price > books[max_index].price)
			max_index = i;
	}

	printf("%.2lf, %s\n", books[max_index].price, books[max_index].name);
	printf("%.2lf, %s\n", books[min_index].price, books[min_index].name);

	return 0;
}
