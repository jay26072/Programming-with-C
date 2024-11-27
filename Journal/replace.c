// 29. W A P to Replace a character in a given string.

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    char ch,ch1;
    int i;

    printf("Enter Any String: ");
//    scanf("%s",&str);
	gets(str);

    printf("Enter Character To Replace: ");
    scanf(" %c",&ch);

    printf("Enter Character To Replace With: ");
    scanf(" %c",&ch1);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            str[i]=ch1;
        }
    }

    printf("After Replace String: %s",str);
}
