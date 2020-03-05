int fn( int a, int n )
{
	int i, rslt = 0;

	for(i = 0; i < n; ++i) {
		rslt *= 10;
		rslt += a;
	}

	return rslt;
}

int SumA( int a, int n )
{
	int i, sum = 0;

	for(i = 1; i <= n; ++i)
		sum += fn(a, i);

	return sum;
}