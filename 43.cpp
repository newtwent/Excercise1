#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*
void fun(int m, int *k, int xx[])
{
	int fg = 1, s = 0;
	for (int i = 1; i < m; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				fg = 0;       //多此一举
				break;
			}
		}
		if (fg == 0)
		{
			xx[s] = i;
			s++;
		}
	}
	*k = s;
}
*/

void fun(int m, int *k, int xx[])
{
	int i, j, n = 0;
	for (i = 4; i < m; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j < i)
		{
			xx[n++] = i;
		}
	}
	*k = n;
}

void main()
{
	int m, n, zz[100];
	system("CLS");
	printf("\nPlease enter an integer number between 10 and 100: ");
	scanf("%d", &n);
	fun(n, &m, zz);
	printf("\n\nThere are %d non-prime numbers less than %d.", m, n);
	for (n = 0; n < m; n++)
	{
		printf("\n %4d", zz[n]);
	}
}