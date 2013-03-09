#include <conio.h>
#include <stdio.h>

/*
void fun(char *a)
{
	while (*a)
	{
		if (*a == '*')
		{
			char *t = a;
			int j = 0;
			while (*t)
			{
				a[j] = a[j + 1];
				t++;
				j++;
			}
			a[j] = '\0';
		}
		else
		{
			a++;
		}
	}
}
*/

void fun(char *a)
{
	int i, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != '*')
		{
			a[j++] = a[i];
		}
	}
	a[j] = '\0';
}
void main()
{
	char s[81];
	printf("Enter a string:\n");
	gets(s);
	fun(s);
	printf("The string after deleted:\n");
	puts(s);
}