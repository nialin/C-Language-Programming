int search( int n )
{
	int i, cnt, square, tmp[3];

	for(i = 11, cnt = 0; i * i < n; ++i) {
		square = i * i;

		tmp[0] = square / 100;
		tmp[1] = square / 10 % 10;
		tmp[2] = square % 10;

		if(tmp[0] == tmp[1] || tmp[0] == tmp[2] || tmp[1] == tmp[2])
			++cnt;
	}

	return cnt;
}
