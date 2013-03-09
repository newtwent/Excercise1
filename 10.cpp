#include <stdio.h>

/*
int fun(char *ss, char c)
{
	int n = 0;
	while(*ss != '\0')
	{
		if(*ss == c)
			n++;
		ss++;
	}
	return n;
}
*/

int fun(char *ss, char c)
{
	int i = 0;
	for (; *ss != '\0', ss++)
	{
		if(*ss == c)
			i++;
		return i;
	}
}

int main()
{
	char a[100], c;
	scanf("%s %c", &a, &c);
	int n;
	n = fun(a, c);
	printf("%d", n);
	return 0;
}