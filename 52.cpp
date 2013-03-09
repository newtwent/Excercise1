#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void fun(int *a, int *n)
{
	int s = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if ((i % 7 == 0||i % 11 == 0)&&(i % 77 != 0))
		{
			*a = i;
			a++;
			s++;
		}
	}
	*a = '\0';
	*n = s;
}

void main()
{
	int aa[1000], n, k;
	system("CLS");
	fun(aa, &n);
	for (k = 0; k < n; k++)
	{
		if ((k + 1) % 10 == 0)
		{
			printf("%5d", aa[k]);
			printf("\n");
		}
		else
		{
			printf("%5d ", aa[k]);
		}
	}
}