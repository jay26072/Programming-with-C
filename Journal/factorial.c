// W A P  find factorial of given number.

#include<stdio.h>
void main()
{
    int num,fact=1,i;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num,fact);
}