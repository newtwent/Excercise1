#include <stdio.h>

int fun(int n)
{
	int s = 0;
	for (int i = 2; i < n; i++)
		if(n % i == 0)
			s += i;
	return s;
}

int main()
{
	int n, sum;
	printf("Input n");
	scanf("%d", &n);
	sum=fun(n);
	printf("sum=%d\n", sum);
	return 0;
}