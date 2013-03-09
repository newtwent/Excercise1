#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#define M 3
#define N 4

void fun(int tt[M][N], int pp[N])
{
	int k = 0;  //多此一举
	for (int i = 0; i < N; i++)
	{
		int max = tt[0][i];
		for (int j = 1; j < M; j++)
		{
			if (max < tt[j][i])
			{
				max = tt[j][i];
			}
		}
		pp[k++] = max;    //pp[i] = max;
	}
}

void main()
{
	int t[M][N] = {{68,32,54,12},{14,24,88,58},{42,22,44,56}};
	int p[N], i, j, k;
	system("CLS");
	printf("The original data is:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%6d", t[i][j]);
		}
		printf("\n");
	}
	fun(t, p);
	printf("\nThe result is:\n");
	for (k = 0; k < N; k++)
	{
		printf("%4d", p[k]);
	}
	printf("\n");
}