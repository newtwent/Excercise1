#include <stdio.h>
#include <math.h>

/*
double fun()
{
	double x1 = 0.0, x0;
    x0 = x1;
	x1 = cos(x0);
	while(abs(x0 - x1) >= 0.000001)
	{
	    x0 = x1;
	    x1 = cos(x0);
	}
	return x1;
}
*/

float fun()
{
	float x1 = 0.0, x0;
	do
	{
		x0 = x1;
		x1 = cos(x0);
	}
	while(fabs(x0 - x1) >= 1e-6);
	return x1;
}

int main()
{
	double x1;
	x1 = fun();
	printf("%f", x1);
	return 0;
}