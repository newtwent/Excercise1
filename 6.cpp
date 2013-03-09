#include <stdio.h>

/*
int fun(int **a)
{

}
*/

int fun(int a[M][N])
{
	int i, j, sum = 0;
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			if (i == 0||i == M - 1||j == 0||j == N - 1)
				sum += a[i][j];
	return sum;
}