#include <stdio.h>
#include <math.h>

/*
bool IsPrime(int i)
{
	for (int j = 1; j <= sqrt((double)i); j++)
	{
		if (i % j == 0)
			return false;
	}
	return true;
}

void fun(int m, int k, int xx[])
{
	int i = m;
	while (k > 0)
	{
		if (IsPrime(i))
		{
			xx[k] = i;
			k--;
		}
		i++;
	}
}

int main()
{
	int m, k, xx[100];
	scanf("%d %d", &m, &k);
	fun(m, k, xx);
	for (int i = k - 1; i >= 0; i--)
		printf("%d ", xx[i]);
	return 0;
}
*/

void fun(int m, int k, int xx[])
{
	int i, j, n;
	for (i = m + 1, n = 0; n < k; i++)
	{
		for (j = 2; j < i; j++)
			if (i % j == 0)
				break;
	    if (j >= i)
		    xx[n++] = i;
	}
}

int main()
{
	int m, k, xx[100];
	scanf("%d %d", &m, &k);
	fun(m, k, xx);
	for(int i = 0; i < k; i++)
	{
		printf("%d ", xx[i]);
	}
	return 0;
}

