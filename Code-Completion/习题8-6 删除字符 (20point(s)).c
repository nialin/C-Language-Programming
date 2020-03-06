void delchar( char *str, char c )
{
	int i, j;
	char buf[MAXN];

	strcpy(buf, str);

	for(i = 0, j = 0; buf[i]; ++i)
		if(buf[i] != c)
			str[j++] = buf[i];

	str[j] = '\0';
}