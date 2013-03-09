#include <math.h>


double fun(double x[10])
{
	double s = 0, l = 0;
	for (int i = 0; i < 10; i++)
	{
		s += x[i] / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		l += (x[i] - s) * (x[i] - s) / 10;
	}
	return sqrt(l);
}