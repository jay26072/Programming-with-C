// 35.Write a function that will scan a character string passed as an argument and convert all lowercase character into their uppercase equivalents.

#include <stdio.h>

void to_uppercase(char*str) 
{
    int i = 0;
    while (str[i]!='\0') 
	{
        if (str[i]>='a' && str[i]<='z') 
		{
            str[i]=str[i]-32;
        }
        i++;
    }
}

void main() 
{
    char str[25];
    printf("Enter Any String: ");
    scanf("%s",&str);
    to_uppercase(str);
    printf("Uppercase String: %s\n", str);
}

