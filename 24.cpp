#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

/*
void fun(char *s, char t[])
{
	int i = 0;
	while (*s != '\0')
	{
		if (*s % 2 == 0)
		{
			s++;
		}
		else
		{
			t[i] = *s;
			s++;
			i++;
		}
	}
	t[i] = '\0';
}
*/

void fun(char *s, char t[])
{
	int i = 0;
	for (; *s != '\0'; s++)
	{
		if (*s % 2 == 1)
		{
			t[i++] = *s;
		}
	}
	t[i] = '\0';
}

void main()
{
	char s[100], t[100];
	system("CLS");
	printf("\nPlease enter string S:");
	scanf("%s", s);
	fun(s, t);
	printf("\nThe result is :%s\n", t);
}
