#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

/*
char *fun(char (*a)[81], int num)
{
	int i = 0, l = strlen(a[0]), j = 0;
	while (j < num)
	{
		j++;
		if (l < strlen(a[j]))
		{
			l = strlen(a[j]);
			i = j;
		}
	}
	return a[i];
}
*/

void main()
{
	char ss[10][81], *ps;
	int n, i = 0;
	system("CLS");
	printf("ÊäÈëÈô¸É×Ö·û´®");
	gets(ss[i]);
	puts(ss[i]);
	while (!strcmp(ss[i], "****") == 0)
	{
		i++;
		gets(ss[i]);
		puts(ss[i]);
	}
	n = i;
	ps = fun(ss, n);
	printf("\nmax=%s\n", ps);
}