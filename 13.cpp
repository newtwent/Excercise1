#include <stdio.h>
#include <math.h>

double fun(int m)
{
	double s = 0;
	for(double i = 1; i <= m; i++)
		s += log(i);
	return sqrt(s);
}

int main()
{
	int m;
	scanf("%d", &m);
	printf("%f", fun(m));
	return 0;
}