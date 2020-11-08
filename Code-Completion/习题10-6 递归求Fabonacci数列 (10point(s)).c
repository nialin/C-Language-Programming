int f( int n )
{
	if(0 == n)
		return 0;

	if(n <= 2)
		return 1;

	return f(n - 1) + f(n - 2);
}
