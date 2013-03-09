#include <stdio.h>

/*
double fun(int n)
{
	int a, b, c = 0;
	double s = 0;
	for(a = 1; a <= n; a++)
	{
		for(b = 1; b <= a; b++)
			c += b;
		s += (double)1 / c;     //¸ñÊ½×ª»»
		c = 0;
	}
	return s;
}
*/

float fun(int n)
{
	int i, s1 = 0;
	float s = 0.0;
	for(i = 1; i <= n; i++)
	{
		s1 = s1 + i;
		s = s + 1.0 / s1;
	}
	return s;
}

int main()
{
	int n;
	double s;
	scanf("%d", &n);
    s = fun(n);
	printf("%f", s);
	return 0;
}