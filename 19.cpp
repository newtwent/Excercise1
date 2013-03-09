#include <math.h>
#include <stdio.h>

/*
double fun(int n)
{
	double j = 1, s = 1, k = 10.5;
	for (int i = 2; i <= n; i++)
	{
		k += 10;
	    s += k;
		j += s;
	}
	return j;
}
*/

double fun(int n)
{
	int i;
	double s = 0.0, s1 = 0.0;
	for (i = 1; i <= n; i++)
	{
		s1 = s1 + pow(i, 0.5);
		s = s + s1;
	}
	return s;
}

void main()
{
	int n;
	double s;
	printf("\n\nInput n:");
	scanf("%d", &n);
	s = fun(n);;
	printf("\n\ns=%f\n\n", s);
}