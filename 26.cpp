#include <stdio.h>
#include <string.h>

/*
long fun(char *p)
{
	long a = 0;
	int i, j = 0, k =1;
	if (*p == '-')
	{
		i = -1;
		p++;
	}
	else
	{
		i = 1;
	}
	char *q =p;
	while (*p != '\0')
	{
		p++;
	}
	p--;
	while (p - q != -1)
	{
		a += k * (*p - 48);
		p--;
		k *= 10;
	}
	return a * i;
}
*/

long fun(char *p)
{
	long n = 0;
	int flag = 1;
	if (*p == '-')
	{
		p++;
		flag = -1;
	}
	else if (*p == '+')
	{
		p++;
	}
	while (*p != '\0')
	{
		n = n * 10 + *p - '0';
		p++;
	}
	return n * flag;
}

void main()
{
	char s[6];
	long n;
	printf("Enter a string:\n");
	gets(s);
	n = fun(s);
	printf("%ld\n", n);
}