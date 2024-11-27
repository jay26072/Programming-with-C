/* W A P to Print following Patterns:

AAAAA
BBBB
CCC
DD
E

*/

#include<stdio.h>
void main()
{
    char ch='A';
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
}
