// 33.Write a program that defines a function to add first n numbers.

#include<stdio.h>
int add(int n) 
{
    int sum=0,i=1;
    while(i<=n)
    {
        sum=sum+i; 
        i=i+1;
    }
    return sum;
}
void main()
{
    int n,sum;
    printf("Enter any number: ");
    scanf("%d",&n);
    sum=add(n);
    printf("Sum of %d natural numbers is: %d",n,sum);
}
