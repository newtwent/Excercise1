#include <stdio.h>
#include <stdlib.h>

#define N 8

typedef struct slist
{
	double s;
	struct slist *next;
}STREC;

double fun(STREC *h)
{
	double max = h->s;
	while (h->next != NULL)  //h != NULL
	{
		if (h->s > max)
		{
			max = h->s;
		}
		h = h->next;
	}
	return max;
}

STREC *creat(double *s)
{
	STREC *h, *p, *q;
	int i = 0;
	h = p = (STREC*)malloc(sizeof(STREC));
	p->s = 0;
	while (i < N)
	{
		q = (STREC*)malloc(sizeof(STREC));
		p->s = s[i];
		i++;
		p->next = q;
		p = q;
	}
	p->next = NULL;
	return h;
}

void outlist(STREC *h)
{
	STREC *p;
	p = h;
	printf("head");
	do
	{
		printf("->%2.0f", p->s);
		p = p->next;
	} while (p->next != NULL);
	printf("\n\n");
}

void main()
{
	double s[N] = {85,76,69,85,91,72,64,87}, max;
	STREC *h;
	h = creat(s);
	outlist(h);
	max = fun(h);
	printf("max=%6.1f\n", max);
}