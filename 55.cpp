#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 5

/*
double fun(int w[][N])
{
	int s = 0, t = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			s += w[i][j];
		}
	}
	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < N - 1; j++)
		{
			t += w[i][j];
		}
	}
	return (double)(s - t) / (4 * N - 4);
}
*/

double fun(int w[][N])
{
	int i, j, k = 0;
	double av = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == 0||i == N - 1||j == 0||j == N - 1)
			{
				av += w[i][j];
				k++;
			}
		}
	}
	return av / k;
}
void main()
{
	int a[N][N] = {0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
	int i, j;
	double s;
	system("CLS");
	printf("*****The array*****\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
	s = fun(a);
	printf("*****THE RESULT*****\n");
	printf("The sum is : %lf\n", s);
}