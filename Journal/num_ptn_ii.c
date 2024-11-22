/* Write a program to print following patterns :

12345
1234
123
12
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
            printf("%d",j);
        }
        printf("\n");
    }
}