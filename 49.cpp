#include <stdio.h>
#include <math.h>

double fun(double x[9])
{
	double s = 0;
	for (int i = 0; i < 8; i++)
	{
		s += sqrt((x[i] + x[i + 1]) / 2);
	}
	return s;
}

void main()
{
	double s, a[9] = {12, 34, 4, 23, 34, 45, 18, 3, 11};
	int i;
	printf("\nThe original data is:\n");
	for (i = 0; i < 9; i++)
	{
		printf("%6.1f", a[i]);
	}
	printf("\n\n");
	s = fun(a);
	printf("s%f\n\n", s);
}