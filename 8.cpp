#include <stdio.h>

/*
double fun1()
{
	int i, j, m = 1;
	double l = 1.0, n = 1.0;
	double k, s;
	while(k < 5e-3)
	{
		for(i = 1, j = 1; j <= m; i += 2, j++)
		{
			l *= j;
			n *= i;
			k = n / l;
		}
		s += k;
		m++;
	}
	return s;
}

double fun2(double k, int l, int n)
{
	if(k > 5e-3)
	{
		n++;
		l += 2;
		k *= (double)n / l;
		return k+fun2(k, l, n);
	}
	else
	{
		return 1;
	}
}
*/

double fun(double eps)
{
	double s1 = 1.0, s = 1.0;
	int n = 1;
	while(s1 >= eps)
	{
		s1 = s1 * n / (2 * n + 1);
		s = s + s1;
		n++;
	}
	return 2 * s;
}

int main()
{
	double  k = 1.0;
	int l = 1, n = 0;
//	printf("%f", fun2(k, l ,n)*2);
	printf("%f", fun(0.005));
	return 0;
}