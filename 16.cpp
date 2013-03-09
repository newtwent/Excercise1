#include <stdio.h>

/*
double fun(int n)
{
	double s = 1, k = 1;
	for (int i = 1; i <= n; i++)
	{
		k *= i;         //²»ÄÜÐ´³É k *= 1 / i
		s += 1 / k;
	}
	return s;
}
*/

double fun(int n)
{
	double t, sn = 1.0;
	int i, j;
	for (i = 1; i <= n; i++)
	{
		t = 1.0;
		for(j = 1; j <= i; j++)
			t *= j;
		sn += 1.0 / t;
	}
	return sn;
}

int main()
{
	int n;
	double s;
	printf("Input n");
	scanf("%d", &n);
	s = fun(n);
	printf("s=%f\n", s);
	return 0;
}