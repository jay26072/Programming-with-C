/* Write a program to print following patterns :

55555
4444   
333
22
1

*/

#include<stdio.h>
void main()
{
    int i,j,num;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }    
}