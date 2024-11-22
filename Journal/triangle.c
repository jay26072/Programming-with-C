/* Write a program to find area of triangle(a=h*b*.5) a = area h = height b = base. */

#include<stdio.h>
void main()
{
    int h,b,a;
    printf("Enter Height: ");
    scanf("%d",&h);
    printf("Enter Base: ");
    scanf("%d",&b);
    a=h*b*.5;
    printf("Area of Triangle: %d",a);
}