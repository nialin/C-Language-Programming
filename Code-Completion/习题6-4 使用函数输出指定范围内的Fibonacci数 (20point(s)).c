int fib( int n )
{
	int i, n0, n1 = 1, n2 = 1;

	if(n < 3)
		return 1;

	for(i = 2; i < n; ++i) {
		n0 = n1 + n2;
		n2 = n1;
		n1 = n0;
	}

	return n0;
}

void PrintFN( int m, int n )
{
	int i, cnt = 0;

	for(i = 1; fib(i) <= n; ++i)
		if(fib(i) >= m)
			printf("%s%d", cnt++ ? " " : "", fib(i));

	if(0 == cnt)
		printf("No Fibonacci number");

	printf("\n");
}