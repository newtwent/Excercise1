#define M 4

#include <stdio.h>

/*
int fun(int a[][M])
{		
	int i = *a[0], m = 0;
    while (m < 2)
	{
    	for (int j = 0; j < M; j++)
    	{
		    if (*(a[m]+j) > i)
		    {
				i = *(a[m]+j);
			}
	    }
		m++;
    }
    return i;
}
*/

int fun(int a[][M])
{
	int i, j, max = a[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

void main()
{
	int arr[2][M] = {5, 8, 3, 45, 76, -4, 12, 82};
	printf("max = %d\n", fun(arr));
}