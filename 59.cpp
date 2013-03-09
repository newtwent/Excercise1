#include <stdio.h>

#define N 16

typedef struct
{
	char num[10];
	int s;
}STREC;

int fun(STREC *a, STREC *b, int l, int h)
{
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		if (a->s >= l&&a->s <= h)
		{
			*b = *a;
			n++;
			b++;
		}
		a++;
	}
	return n;
}

void main()
{
	STREC s[N] = {{"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},{"GA001",96},{"GA007",72},{"GA008",64},{"GA006",87},{"GA015",85},{"GA013",94},{"GA012",64},{"GA014",91},{"GA011",90},{"GA017",64},{"GA018",64},{"GA016",72}};
	STREC h[N];
	int i, n, low, heigh, t;
	printf("Enter 2 integer number low & heigh: ");
	scanf("%d %d", &low, &heigh);
	if (heigh < low)
	{
		t = heigh;
		heigh = low;
		low = t;
	}
	n = fun(s, h, low, heigh);
	printf("The student's data between%d--%d:\n", low, heigh);
	for (i = 0; i < n; i++)
	{
		printf("%s %4d\n", h[i].num, h[i].s);
	}
	printf("\n");
}