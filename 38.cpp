#include <stdio.h>
#include <conio.h>
#include <string.h>

void fun(char *s, char t[])
{
	int i = 0;
	while (*s)
	{
		if (*s % 2 == 0)
		{
			t[i] = *s;
			i++;
		}
		s++;
	}
	t[i] = '\0';
}

void main()
{
	char s[100], t[100], Msg[] = "Please enter string s";
	printf(Msg);
	scanf("%s", s);
//	s[0] = '\0';        '\0'µÄASCIIÂëÎªÆæÊý
	fun(s, t);
	printf("\nThe result is %s\n", t);
}