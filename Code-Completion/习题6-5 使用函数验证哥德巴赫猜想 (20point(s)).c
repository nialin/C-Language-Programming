int prime( int p )
{
	int i;

	if(2 == p)
		return 1;

	if(p < 2 || 0 == p % 2)
		return 0;

	for(i = 3; i * i <= p; i += 2)
		if(0 == p % i)
			return 0;

	return 1;
}

void Goldbach( int n )
{
	int p;

	for(p = 3; p < n && !(prime(p) && prime(n - p)); p += 2)
		;

	printf("%d=%d+%d", n, p, n - p);
}