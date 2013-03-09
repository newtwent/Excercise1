#include <stdio.h>
#include <math.h>

double fun(int m)
{
	double s = 0;
	for(int i = 0; i < m; i++)
	{
		if(i % 5 == 0&&i % 11 == 0)
			s += i;
	}
	return sqrt(s);
}

int main()
{
	int m;
	scanf("%d", &m);
	printf("%f", fun(m));
	return 0;
}