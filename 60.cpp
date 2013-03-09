#include <string.h>
#include <stdio.h>

#define N 80

int fun(char *s)
{
	int k = 0;
	while (*s != NULL)
	{
		k++;
		while (*s >= 'a'&&*s <= 'z')
		{
			s++;
		}
		while (*s == ' ')
		{
			s++;
		}
	}
	return k;
}

void main()
{
	char line[N];
	int num = 0;
	printf("Enter a string:\n");
	gets(line);
	num = fun(line);
	printf("The number of word is:%d\n\n", num);
}