#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void fun(int x, int pp[], int *n)
{
	int j = 0;
	for (int i = 1; i <= x / 2 + 1; i++)
	{
		if (x % i == 0&&i % 2 != 0)
		{
			pp[j++] = i;
		}
	}
	*n = j;
}

void main()
{
	int x, aa[1000], n, i;
	system("CLS");
	printf("\nPlease enter an intergernumber: \n");
	scanf("%d", &x);
	fun(x, aa, &n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", aa[i]);
	}
	printf("\n");
}