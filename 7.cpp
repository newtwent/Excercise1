#include <stdio.h>


float fun(float h)
{
	int i;
	i = h * 1000;
	if (i % 10 > 4)
		i = i / 10 + 1;
	else
		i = i / 10;
	float j = (float)i / 100;
	return j;
}


/*
float fun(float h)
{
	long t;
	t = (h * 1000 + 5) / 10;
	return (float) t / 100;
}
*/
int main()
{
	float h;
	scanf("%f", &h);
	float i = fun(h);
	printf("%.2f", i);
	return 0;
}