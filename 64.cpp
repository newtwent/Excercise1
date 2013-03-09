#include <string.h>
#include <stdio.h>


void fun(char s[], int c)
{
	int i = 0;
	while (s[i] != NULL)
	{
		if (s[i] == c)
		{
			int j = i;
			while (s[j] != NULL)
			{
				s[j] = s[j + 1];
				j++;
			}
		}
		i++;
	}
}

/*
void fun(char s[], int c)
{
	int i = 0;
	char *p;
	p = s;
	while (*p)
	{
		if (*p != c)
		{
			s[i] = *p;
			i++;
		}
		p++;
	}
	s[i] = '\0';
}
*/

void main()
{
	static char str[] = "turbo c and borland c++";
	char ch;
	scanf("%c", &ch);
	fun(str, ch);
	printf("str[]=%s\n", str);
}