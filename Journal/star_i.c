/*Write a program to print following patterns :

*
**
***
****
*****

*/

#include<stdio.h>
void main()
{
    int i,j,num;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }    
}
