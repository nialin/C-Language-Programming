void strmcpy( char *t, int m, char *s )
{
	int len;

	len = strlen(t);

	if(m > len)
		*s = '\0';
	else
		strcpy(s, t + m - 1);
}