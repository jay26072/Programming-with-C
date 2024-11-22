// Write a C program to find out the Maximum and Minimum number from given 3 numbers 

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter Value Of A:");
    scanf("%d",&a);

    printf("Enter Value Of B:");
    scanf("%d",&b);

    printf("Enter Value Of C:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("Maximum Value:%d",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum Value:%d",b);
    }
    else
    {
        printf("Maximum Value:%d",c);
    }
    
}