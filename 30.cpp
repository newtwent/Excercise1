#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

void fun(int a[][N], int m)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			a[i][j] *= m;
		}
	}
}

void main()
{
	int a[N][N], m, i, j;
	printf("****The array*****\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = rand() % 20;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	m = rand() % 4;
	printf("m=%4d\n", m);
	fun(a, m);
	printf("THE RESULT\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}