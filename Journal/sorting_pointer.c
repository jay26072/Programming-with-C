// 45.Write a program for sorting using pointer.

#include<stdio.h>

void main()
{
    int a[5],i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int *p=a;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("\nSorted Elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
}