#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
void fun(char p1[], char p2[])
{
	char *p11 = p1, *p22 = p2;
	while (*p11)
	{
		p11++;
	}
	while (*p22)
	{
		*p11 = *p22;
		p11++;
		p22++;
	}
	*p11 = '\0';
}
*/

void fun(char p1[], char p2[])
{
	int i, j;
	for (i = 0; p1[i] != '\0'; i++);
	for (j = 0; p2[j] != '\0'; j++)
	{
		p1[i++] = p2[j];
	}

	p1[i] = '\0';
}

void main()
{
	char s1[80], s2[40];
	system("CLS");
	printf("Enter s1 and s2:\n");
	scanf("%s%s", s1, s2);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("Invoke fun(s1, s2):\n");
	fun(s1, s2);
	printf("After invoking:\n");
	printf("%s\n", s1);
}