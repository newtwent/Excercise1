#include <stdio.h>

/*
double fun(int m, int n)
{
	int i, j;
	double p = 1;
	for(i = n + 1, j = 1; i <= m; i++, j++)
	{
		p *= (double)i / j;
	}
	return p;
}
*/

float fun(int m, int n)
{
	int i;
	double p = 1.0;
	for (i = 1; i <= m; i++)
        p = p * i;
	for (i = 1; i <= n; i++)
		p = p / i;
	for (i = 1; i <= m - n; i++)
		p = p / i;
	return p;
}

int main()
{
	int m, n;
	double p;
	scanf("%d %d", &m, &n);
	p = fun(m, n);
	printf("%f", p);
}