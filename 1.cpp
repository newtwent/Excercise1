#include <stdio.h>

void fun(char *tt, int pp[])
{
	while(*tt != '\0')
	{
		if(*tt >= 'a'&&*tt <= 'z')
			pp[*tt - 'a']++;
		tt++;
	}
}

int main()
{
	char t[100], *tt;
	int pp[26], i = 0;
	scanf("%s", t);
	tt = &t[0];
	while (i < 26)
	{
		pp[i] = 0;
		i++;
	}
	fun(tt, pp);
	i = 0;
	while (i < 26)
	{
		printf("%d", pp[i]);
		i++;
	}
	return 0;
}