#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*
int fun(int *s, int t, int *k)
{
	int max = *s, q;
	for (int i = 0; i < t; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
			q = i;
		}
	}
	*k = q;
	return max;
}
*/

int fun(int *s, int t, int *k)
{
	int i;
	*k = 0;
	for (i = 0; i < t; i++)
	{
		if (s[*k] < s[i])
		{
			*k = i;
		}
	}
	return s[*k];
}

void main()
{
	int a[10] = {876,675,896,101,301,401,980,431,451,777}, k;
	system("CLS");
	fun(a, 10, &k);
	printf("%d, %d\n", k, a[k]);
}