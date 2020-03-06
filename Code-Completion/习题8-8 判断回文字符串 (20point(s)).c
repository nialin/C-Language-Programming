bool palindrome( char *s )
{
	int i, len = strlen(s);

	for(i = 0; i < len / 2; ++i)
		if(s[i] != s[len - 1 - i])
			return false;

	return true;
}