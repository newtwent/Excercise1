#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 81

/*
void fun(char *s)
{
	int i = 0;
	char b[N];
	while (*s != '\0')
	{
		b[i] = *s;
		i++;
		s++;
	}
	s--;
	for (int j = 0; j < i; j++)
	{
		*s = b[j];
		s--;
	}

}
*/

void fun(char *s)
{
	char ch;
	int i, m, n;
	i = 0;
	m = n = strlen(s) - 1;
	while (i < (n + 1) / 2)
	{
		ch = s[i];
		s[i] = s[m];
		s[m] = ch;
		i++;
		m--;
	}
}

void main()
{
	char a[N];
	printf("Enter a string :");
	gets(a);
	printf("The original string is :");
	puts(a);
	fun(a);
	printf("\n");
	printf("The string after modified :");
	puts(a);
	strcpy(a, "Hello, world!");
	fun(a);
}