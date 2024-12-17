// 40.Write a program to print address of variable using pointer.

#include<stdio.h>

void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Variable Address is: %d",p);
}