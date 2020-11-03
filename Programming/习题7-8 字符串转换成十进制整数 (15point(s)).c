#include <stdio.h>

int main()
{
	char ch;
	long long sign = 0, rslt;

	for(rslt = 0; (ch = getchar()) != '#'; ) {
		if('-' == ch && 0 == sign)
			sign = -1;

		if(ch >= '0' && ch <= '9') {
			rslt *= 16;
			rslt += ch - '0';

			if(0 == sign)
				sign = 1;
		}

		else if(ch >= 'A' && ch <= 'F') {
			rslt *= 16;
			rslt += ch - 'A' + 10;

			if(0 == sign)
				sign = 1;
		}

		else if(ch >= 'a' && ch <= 'f') {
			rslt *= 16;
			rslt += ch - 'a' + 10;

			if(0 == sign)
				sign = 1;
		}

		else
			;
	}

	printf("%lld\n", sign * rslt);

	return 0;
}
