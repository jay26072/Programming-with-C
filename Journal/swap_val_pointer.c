// 41.Write a C program to swap the two values using pointers.

#include<stdio.h>

void main()
{
    int a,b;
    int *p1=&a;
    int *p2=&b;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    printf("Before swapping A=%d and B=%d\n",a,b);

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    
    printf("After swapping A=%d and B=%d\n",a,b);

    
}