#include <stdio.h>

#define M 3
#define N 4

/*
void fun(char (*s)[N], char *b)
{
	for (int i = 0; i < N;i++)
	{
		for (int j = 0; j < M; j++)
		{
			char q = s[j][i];
			b[j + 3 * i] = q;
		}
	}
	b[M * N] = '\0';
}
*/

void fun(char (*s)[N], char *b)
{
	int i, j, k = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			b[k++] = s[j][i];
		}
	}
	b[k] = '\0';
}

void main()
{
	char a[100], w[M][N] = {{'W','W','W','W'},{'S','S','S','S'},{'H','H','H','H'}};
	int i, j;
	printf("The matrix:\n");
	for (int i = 0; i < M;i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3c", w[i][j]);
		}
		printf("\n");
	}
	fun(w, a);
	printf("The A srting:\n");
	puts(a);
	printf("\n\n");
}
