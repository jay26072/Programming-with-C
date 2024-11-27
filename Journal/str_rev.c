// 30.W A P to Reverse String

#include<stdio.h>
#include<string.h>
void main()
{
     char str[100],temp;
     int i=0,j;
     printf("Enter a string: ");
     gets(str);
     j=strlen(str)-1;
     while(i<j)
     {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
     }
     printf("Reversed string: %s",str);
}


/*

30.W A P to Reverse String

#include<stdio.h>
#include<string.h>

void main()
{
    int i,len;
    char str[25];

    printf("Enter Any String: ");
    gets(str);
    len=strlen(str);

   for(i=len;i>-1;i--)
   {
        printf("%c",str[i]);
   }
}

*/
