// W A P TO CHECK WHETHER THE ENTERED CHARACTER IS CAPITAL, SMALL LETTER, DIGIT OR ANY SPECIAL CHARACTER.

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Any Character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c Is Capital Letter",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c Is Small Letter",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c Is Digit",ch);
    }
    else
    {
        printf("%c Is Special Character",ch);
    }
}
