#include <stdio.h>

/*
void fun(int m, int *a, int *n)
{
	for (int i = 1; i <= m; i++)
	{
		if (i % 7 == 0||i % 11 == 0)
		{
			*a = i;
			a++;
			*n++; 
		}
	}
}
*/

void fun(int m, int *a, int *n)
{
	int i, j = 0;
	for (i = 1; i <= m; i++)
		if (i % 7 == 0 ||i % 11 == 0)
			a[j++] = i;
	*n = j;
}

int main()
{
	int a[100], *n, i = 0;
	fun(50, a, n);    //地址不可用
	while(i < *n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("%d", *n);
	return 0;
}