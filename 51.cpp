#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int fun(int score[], int m, int below[])
{
	double ave = 0;
	int j = 0;
	for (int i = 0; i < m; i++)
	{
		ave += (double)score[i] / 9;
	}
	for (int i = 0; i < m; i++)
	{
		if (score[i] < ave)
		{
			below[j++] = score[i];
		}
	}
	return j;
}

void main()
{
	int i, n, below[9];
	int score[9] = {10,20,30,40,50,60,70,80,90};
	system("CLS");
	n = fun(score, 9, below);
	printf("\nBelow the average score are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", below[i]);
	}
}