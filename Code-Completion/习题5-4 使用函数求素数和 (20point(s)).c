int prime( int p )
{
	int i;

	if(p < 2)
		return 0;

	if(2 == p)
		return 1;

	if(0 == p % 2)
		return 0;

	for(i = 3; i * i <= p; i += 2)
		if(0 == p % i)
			return 0;

	return 1;
}

int PrimeSum( int m, int n )
{
	int i, sum = 0;

	for(i = m; i <= n; ++i)
		if(prime(i))
			sum += i;

	return sum;
}