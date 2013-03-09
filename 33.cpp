#include <stdio.h>
#include <conio.h>
#include <string.h>

void fun(char *ss)
{
	while (*ss)
	{
		if (*ss >= 'a'&&*ss <= 'z')
		{
			*ss += ('A' - 'a');
		}
		ss+=2;
	}
}

void main()
{
	char tt[51];
	printf("\nPlease enter an character string within 50 characters:\n");
	gets(tt);
	printf("\n\nAfter changing, the string\n %s", tt);
	fun(tt);
	printf("\nbecomes\n %s", tt);
}
