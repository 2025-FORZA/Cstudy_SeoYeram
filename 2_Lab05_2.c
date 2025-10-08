#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[1000001];
	int count = 0;

	while (scanf("%s", s) == 1)
	{
		count++;

		int ch;
		while ((ch = getchar()) == ' ')
		{}

		if (ch == '\n')
		{
			break;
		}

		ungetc(ch, stdin);
	}

	printf("%d", count);

    return 0;
}
#endif