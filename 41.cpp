#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*
unsigned fun(unsigned w)
{
	unsigned s = 0;
	int k = 1;
	while (w > 10)
	{
		s += w % 10 * k;
		k *= 10;
		w /= 10;
	}
	return s;
}
*/

unsigned fun(unsigned w)
{
	if (w >= 10000)
	{
		return w % 10000;
	}
	if (w >= 1000)
	{
		return w % 1000;
	}
	if (w >= 100)
	{
		return w % 100;
	}
	if (w >= 10)
	{
		return w % 10;
	}
}

void main()
{
	unsigned x;
	system("CLS");
	printf("Enter a unsigned integernumber: ");
	scanf("%u", &x);
	printf("The original data is:%u\n", x);
	if (x < 10)
	{
		printf("Data error!");
	}
	else
	{
		printf("The result:%u\n", fun(x));
	}
}