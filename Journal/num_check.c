// W A P TO FIND THAT THE ACCEPTED NUMBER IS NEGATIVE, POSITIVE OR ZERO.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is Positive Number",num);
    }
    else if(num<0)
    {
        printf("%d is Negative Number",num);
    }
    else
    {
        printf("%d is Zero Number",num);
    }
}