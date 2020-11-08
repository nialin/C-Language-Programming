#include <stdio.h>
#include <string.h>
#define MAXS 30

char *search(char *s, char *t);

int main()
{
    char s[MAXS], t[MAXS], *pos;

    gets(s);

    gets(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t)
{
	int i, len_s = strlen(s), len_t = strlen(t);

	for(i = 0; i <= len_s - len_t && strncmp(&s[i], t, len_t); ++i)
		;

	return i <= len_s - len_t ? &s[i] : NULL;
}
