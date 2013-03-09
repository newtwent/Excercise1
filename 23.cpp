#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
void fun(char *a, char *h, char *p)
{
	int i = 0;
	char *s = a;
	while (*s == '*')
	{
		i++;
		s++;
	}
	while (h != p)
	{
		if (*h == '*')
		{
			int j = i;
			for (; a[j] != '\0'; j++)
			{
			    a[j] = a[j + 1];
			}
			p--;
		}
		else
		{
		    h++;
			i++;
		}
	}
}
*/

void fun(char *a, char *h, char *p)
{
	int i = 0;
	char *q = a;
	while (q < h )
	{
		a[i] = *q;
		q++;
		i++;
	}
	while (q < p )
	{
		if (*q != '*')
		{
			a[i] = *q;
			i++;
		}
		q++;
	}
	while (*q)
	{
		a[i] = *q;
		i++;
		q++;
	}
	a[i] = '\0';
}

void main()
{
	char s[81], *t, *f;
	printf("Enter a string\n");
	gets(s);
	t = f = s;
	while(*t)
	{
		t++;
	}
	t--;
	while (*t == '*')
	{
		t--;
	}
	while (*f == '*')
	{
		f++;
	}
	fun(s, f, t);
	printf("The string after deleted\n");
	puts(s);
}