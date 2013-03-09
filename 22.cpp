#include <stdio.h>

#define N 80

/*
int fun(char *str)
{
	char *p = str;
	if(*(++p) == '\0')
		return 0;
	else
	{
	    while(*p != '\0')
	    	p++;
	    p--;
	    while(p - str == 1||p - str == 0)
	    {
	    	if(*p != *str)
	    	{
	    		return 0;
	    		break;
	    	}
	    	p--;
	    	str++;
	    }
    	return 1;
	}
}
*/

int fun(char *str)
{
	int i, n = 0, fg = 1;
	char *p = str;
	while(*p)
	{
		n++;
		p++;
	}
	for(i = 0; i < n / 2; i++)
		if (str[i] == str[n - 1 - i])
		{
			;
		}
		else
		{
			fg = 0;
			break;
		}
	return fg;
}

void main()
{
	char s[N];
	char *test[]={"1234321", "123421", "123321", "abcdCBA"};
	int i;
	printf("Enter a string\n");
	gets(s);
	printf("\n\n");
	puts(s);
	if(fun(s))
		printf("YES\n");
	else
		printf("NO\n");
}