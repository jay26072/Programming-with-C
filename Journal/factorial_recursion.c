// 34.Write a program to find factorial of a number using recursion.

#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}