// W A P TO EVALUATE THE SERIES 1^2+2^2+3^2+……+N^2.

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum Is: %d",sum);
}