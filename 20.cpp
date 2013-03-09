#include <stdio.h>

double fun(int n)
{
	double s = 0;;
	for (double i = 1; i <= 2 * n - 1; i += 2)
		s += 1 / (i * (i + 1));
	return s;
}

void main()
{
	int n;
	double s;
	printf("\nInput n:");
	scanf("%d", &n);
	s = fun(n);
	printf("\ns=%f\n", s);
}