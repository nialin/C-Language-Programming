int CountDigit( int number, int digit )
{
	int cnt = 0;

	if(number < 0)
		number = -number;

	do {
		if(number % 10 == digit)
			++cnt;

		number /= 10;
	}while(number);

	return cnt;
}