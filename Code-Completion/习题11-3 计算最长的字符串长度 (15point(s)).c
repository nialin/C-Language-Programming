int max_len( char *s[], int n )
{
	int i, len, max_len = 0;

	for(i = 0; i < n; ++i) {
		len = strlen(s[i]);

		if(max_len < len)
			max_len = len;
	}

	return max_len;
}
