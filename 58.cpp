#include <stdio.h>

#define N 8

typedef struct
{
	char num[10];
	double s[N];
	double ave;
}STREC;

void fun(STREC *p)
{
	for (int i = 0; i < N; i++)
	{
		p->ave += p->s[i] / N;
	}
}

void main()
{
	STREC s = {"GA005",85.5,76,69.5,85,91,72,64.5,87.5};
	int i;
	fun(&s);
	printf("The %s's student data:\n", s.num);
	for (i = 0; i < N; i++)
	{
		printf("%4.1f\n", s.s[i]);
	}
	printf("\nave=%7.3f\n", s.ave);
}