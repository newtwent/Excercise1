#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

double fun(int n)
{
	double s = 0;;
	for(double i = 1; i <= n; i++)
		s += 1 / (i * (i + 1));
	return s;
}

void main()
{
	printf("%f\n", fun(10));
}
