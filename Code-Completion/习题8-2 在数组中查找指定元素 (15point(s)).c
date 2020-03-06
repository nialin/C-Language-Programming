int search( int list[], int n, int x )
{
	int i;

	for(i = 0; i < n && list[i] != x; ++i)
		;

	return i < n ? i : -1;
}