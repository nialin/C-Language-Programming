void StringCount( char s[] )
{
	int i, cnts[4] = {0};

	for(i = 0; s[i]; ++i) {
		if(isalpha(s[i]))
			++cnts[0];
		else if(' ' == s[i] || '\n' == s[i])
			++cnts[1];
		else if(isdigit(s[i]))
			++cnts[2];
		else
			++cnts[3];
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d\n", cnts[0], cnts[1], cnts[2], cnts[3]);
}