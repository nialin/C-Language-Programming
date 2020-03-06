int get_origin_num(int cur_size, int m, int origin_size)
{
	return ((cur_size == origin_size ? 0 : get_origin_num(cur_size, m, origin_size - 1)) + m - 1) % origin_size + 1;
}

void CountOff( int n, int m, int out[] )
{
	int i;

	for(i = 1; i <= n; ++i)
		out[get_origin_num(i, m, n) - 1] = n - i + 1;
}