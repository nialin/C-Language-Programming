double calc_pow( double x, int n )
{
	if(n <= 1)
		return x;

	return x * calc_pow(x, n - 1);
}
