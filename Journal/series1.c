// Write a C program to find 1+1/2! +1/3! +1/4! +. ..... +1/n!

#include<stdio.h>
void main()
{
    int i,n,j,fact;
    float sum=0.0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        sum+=1.0/fact;
    }
    printf("Sum of 1+1/2! +1/3! +1/4! +. ..... +1/%d! is: %.2f",n,sum);
}
