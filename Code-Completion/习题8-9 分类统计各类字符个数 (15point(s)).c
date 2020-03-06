void StringCount( char *s )
{
	int i, cnts[5] = {0};

	for(i = 0; s[i]; ++i) {
		if(isupper(s[i]))
			++cnts[0];
		else if(islower(s[i]))
			++cnts[1];
		else if(' ' == s[i])
			++cnts[2];
		else if(isdigit(s[i]))
			++cnts[3];
		else
			++cnts[4];
	}

	printf("%d %d %d %d %d\n", cnts[0], cnts[1], cnts[2], cnts[3], cnts[4]);
}