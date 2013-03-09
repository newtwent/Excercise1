#include <stdio.h>

double fun(int n)
{
	double k = 0, s = 0;
	for (double i = 1; i <= n; i++)
	{
		k += i;
		s += 1 / k;
	}
	return s;
}

void main()
{
	int n;
	double s;
	printf("\nInput n: ");
	scanf("%d", &n);
	s = fun(n);
	printf("\n\ns=%f\n\n",s);
}