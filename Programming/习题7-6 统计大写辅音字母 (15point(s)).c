#include <stdio.h>

int vowel_find(char ch)
{
	int i;
	char vowel[5] = "AEIOU";

	for(i = 0; i < 5 && ch != vowel[i]; ++i)
		;

	return i < 5;
}

int main()
{
	char ch;
	int cnt = 0;

	while((ch = getchar()) != '\n')
		if(ch >= 'A' && ch <= 'Z' && !vowel_find(ch))
			++cnt;

	printf("%d\n", cnt);

	return 0;
}
