int even( int n )
{
	return !(n & 1);
}

int OddSum( int List[], int N )
{
	int i, sum = 0;

	for(i = 0; i < N; ++i)
		if(List[i] & 1)
			sum += List[i];

	return sum;
}