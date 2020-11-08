double fact( int n )
{
	if(n <= 1)
		return 1;

	return fact(n - 1) * n;
}

double factsum( int n )
{
	int i;
	double rslt;

	for(i = 1, rslt = 0; i <= n; ++i)
		rslt += fact(i);

	return rslt;
}
