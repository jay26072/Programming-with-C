// 42.Write a C program to print the address of character and the character of string using pointer.

#include<stdio.h>
void main()
{
    char str[100];
    char *p;
    printf("Enter Any String: ");
    gets(str);
    p=str;
    printf("String Address is: %d",p);
    printf("\nCharacter of String is: %c",*p);
}
