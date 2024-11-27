/* W A P to Print following Patterns:

ABCDE
ABCD
ABC
AB
A

*/

#include<stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        ch='A';
    }
}
