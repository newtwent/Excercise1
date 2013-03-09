#include <stdio.h>

/*
long fun(int a, int b)
{
	return a % 10 * 1000 + b % 10 * 100 + a / 10 * 10 + b / 10;
}
*/

void fun(int a, int b, long *c)
{
	*c = a % 10 * 1000 + b % 10 * 100 + a / 10 * 10 + b / 10;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	long c;
	fun(a, b, &c);
	printf("%ld", c);
	return 0;
}