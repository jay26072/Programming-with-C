/*
Write a program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder) */

#include<stdio.h>
void main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("Distinction");
    }
    else if(marks>=60 && marks<=79)
    {
        printf("First Class");
    }
    else if(marks>=40 && marks<=59)
    {
        printf("Second Class");
    }
    else
    {
        printf("Fail");
    }
}