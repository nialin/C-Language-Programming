void reverse(char s[], int n)
{
	int i;
	char tmp;

	for(i = 0; i < n / 2; ++i) {
		tmp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = tmp;
	}
}

void Shift( char s[] )
{
	reverse(s, 3);
	reverse(s + 3, strlen(s) - 3);
	reverse(s, strlen(s));
}