#include <stdio.h>
#include <math.h>
#include <conio.h>

int fun(int t)
{
	int a = 1, b = 1, c = 2;
	while(!(c > t))
	{
		a = b;
		b = c;
		c = a + b;
	}
	return c;
}

int main()
{
	int n;
	n = 1000;
	printf("n=%d,f=%d\n", n, fun(n));
	return 0;
}
