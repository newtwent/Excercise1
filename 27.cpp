#include <stdio.h>

/*
char *fun(char *s, char *t)
{
	char *s1 = s, *t1 = t;
	int s2 = 0, t2 = 0;
	while (*s)
	{
		s2++;
		s++;
	}
	while (*t)
	{
		t2++;
		t++;
	}
	if (s2 >= t2)
	{
		return s1;
	}
	else
	{
		return t1;
	}
}
*/

char *fun(char *s, char *t)
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++);
	for (j = 0; t[j] != '\0'; j++);
	if (i >= j)
	{
		return s;
	}
	else
	{
		return t;
	}
}

void main()
{
	char a[20], b[10], *p, *q;
	printf("Input 1st string: ");
	gets(a);
	printf("Input 2nd string: ");
	gets(b);
	printf("%s", fun(a, b));
}