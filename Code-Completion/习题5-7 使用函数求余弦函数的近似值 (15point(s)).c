double factorial(int i)
{
	double rslt;

	for(rslt = 1; i > 0; --i)
		rslt *= i;

	return rslt;
}

double funcos( double e, double x )
{
	int i;
	double rslt = 0 , item = 1;

	for(i = 0; fabs(item) >= e; ++i) {
		item = (i & 1 ? -1 : 1) * pow(x, 2 * i) /  factorial(2 * i);

		rslt += item;
	}

	return rslt;
}