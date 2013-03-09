#include <stdio.h>
#include <math.h>

/*
double fun(int n)
{
	double s = 0;
	for (int i = 3; i <= n; i++)
	{
	    int fg = 1;
		for (int j = 2; j <= sqrt((double)i); j++)
		{
			if (i % j == 0)
			{
				fg = 0;
				break;
			}
		}
		if (fg == 1)
		{
			s += sqrt((double)i);
		}
	}
	return s;
}
*/

double fun(int n)
{
	int m, k, i;
	double s = 0.0;
	for (m = 3; m <= n; m++)
	{
		k = sqrt((double)m);
		for (i = 2; i <= k; i++)
		{
			if (m % i == 0)
			{
				break;
			}
		}
		if (i >= k + 1)
		{
			s += sqrt((double)m);
		}
	}
	return s;
}

void main()
{
	int n;
	double sum;
	printf("\n\nInput n:");
	scanf("%d", &n);
	sum = fun(n);
	printf("\n\nsum=%f\n\n", sum);
}