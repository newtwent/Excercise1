#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
void fun(char *a)
{
	char *p = a;
	while (*p == '*')
	{
		p++;
		a++;
	}
	while(*p != '\0')
	{
		if(*p == '*')
		{
			a = p;
			char *s = ++p;
			while(*s != '\0')
			{
				*a = *s;
				a++;s++;
			}
		}
		p++;
	}
	while(*a == '*')
	{
		*a = '\0';
		a--;
	}
}
*/

void fun(char *a)
{
	int i = 0;
	char *p = a;
	while(*p&&*p == '*')
	{
		a[i] = *p;
		i++;
		p++;
	}
	while(*p)
	{
		if(*p != '*')
		{
			a[i] = *p;
			i++;
		}
		p++;
	}
	a[i] = '\0';
}

void main()
{
	char s[81];
	printf("Enter astring\n");
	gets(s);
	fun(s);
	printf("The string after deleted\n");
	puts(s);
}