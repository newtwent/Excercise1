#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*
int fun(char *str, char *substr)
{
	int i = 1, n = 0;
	char *t = substr;
	while (*str)
	{
		substr = t;
		while (*str != *substr&&*str)
	    {
		    str++;
	    }
	    while (*substr)
	    {
		    if (*str == *substr)
		    {
				str++;
		        substr++;
	    	}
			else
			{
				i = 0;
				break;
			}
    	}
    	if (i == 1)
    	{
    		n++;
    	}
    }
    	return n;
}
*/

int fun(char *str, char *substr)
{
	int i, j = 0;
	for (i = 0; str[i + 1] != '\0'; i++)
	{
		if (str[i] == substr[0]&&str[i + 1] == substr[1])
		{
			j++;
		}
	}
	return j;
}

void main()
{
	char str[81], substr[3];
	int n;
	system("CLS");
	printf("ÊäÈëÖ÷×Ö·û´®£º");
	gets(str);
	printf("ÊäÈë×Ó×Ö·û´®£º");
	gets(substr);
	puts(str);
	puts(substr);
	n = fun(str, substr);
	printf("n = %d\n", n);
}