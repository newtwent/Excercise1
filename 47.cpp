#include <stdio.h>

double fun(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 5 == 0 || i % 9 == 0)
		{
			s += 1.0 / i;
		}
	}
	return s;
}

void main()
{
	int n;
	double s;
	printf("\nInput n");
	scanf("%d", &n);
	s = fun(n);
	printf("\n\n s=%f\n",s);
}