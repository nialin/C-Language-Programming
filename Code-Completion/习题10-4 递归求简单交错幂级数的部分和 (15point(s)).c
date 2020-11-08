double fn( double x, int n )
{
	int i, sign;
	double item;

	if(n <= 1)
		return x;

	for(i = 1, item = 1; i <= n; ++i)
		item *= x;

	sign = n & 1 ? 1 : -1;

	return sign * item + fn(x, n - 1);
}
