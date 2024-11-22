/* Write a program to print following patterns :

1
22
333
4444
55555

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
            printf("%d",i);
        }
        printf("\n");
    }
}