int factorsum( int number )
{
	int i, sum = 0;

	if(1 == number)
		return 1;

	for(i = 1; i < number; ++i)
		if(0 == number % i)
			sum += i;

	return sum;
}

void PrintPN( int m, int n )
{
	int i, j, cnt = 0;

	for(i = m; i <= n; ++i) {
		if(factorsum(i) == i) {
			printf("%d = 1", i);

			for(j = 2; j < i; ++j)
				if(0 == i % j)
					printf(" + %d", j);

			printf("\n");

			++cnt;
		}
	}

	if(0 == cnt)
		printf("No perfect number\n");
}