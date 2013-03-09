#include <stdio.h>

/*
void fun(char *a)
{
	while(!(*a >= 'a'&&*a <= 'z'||*a >= 'A'&&*a <= 'Z'))
	{
		a += sizeof('*');
	}
}
*/

void fun(char *a)
{
	char *p = a;
	while(*p == '*')
		p++;
	for(; *p != '\0'; p++, a++)
		*a = *p;
	*a =  '\0';
}

int main()
{
	char a[100];
	scanf("%s", &a);
	fun(a);
	printf("%s", a);
	return 0;
}