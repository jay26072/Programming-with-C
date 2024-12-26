// 43.Write a program to access elements using pointer.

#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int *p=a;
    printf("\nAccess Using Pointer: \n\n");
    for(i=0;i<5;i++)
    {
        printf("Element %d: ",i+1);
        printf("%d\n",*(p+i));
    }
}
