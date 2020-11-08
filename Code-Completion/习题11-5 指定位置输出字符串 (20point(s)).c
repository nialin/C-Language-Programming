char *match( char *s, char ch1, char ch2 )
{
	int i;
	char *rslt = s;

	while(*rslt && *rslt != ch1)
		++rslt;

	for(i = 0; rslt[i] && rslt[i] != ch2; ++i)
		printf("%c", rslt[i]);

	if(rslt[i])
		printf("%c", rslt[i]);

	printf("\n");

	return rslt;
}
