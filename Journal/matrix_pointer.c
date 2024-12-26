// 44.Write a program to read, print and addition of two Matrices using pointer and user define functions.

#include<stdio.h>

int read(int *p,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter Element %d %d: ",i+1,j+1);
            scanf("%d",p+i*r+j);
        }
    }
}
int print(int *p,int r,int c)
{
    int i,j;
    printf("\nPrint The Matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(p+i*r+j));
        }
        printf("\n");
    }
}

int addition(int *p1,int *p2,int r,int c)
{
    int i,j,sum=0;
    printf("\nAddition Of Matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=*(p1+i*r+j)+*(p2+i*r+j);
            printf("%d ",sum);
        }
        printf("\n");
    }
}

void main()
{
    int a[3][3],b[3][3],i,j,r=3,c=3;
    int *p1=a[0],*p2=b[0];
    printf("Enter 1'st Array Value:\n");
    read(p1,r,c);
    printf("\nEnter 2'nd Array Value:\n");
    read(p2,r,c);
    print(p1,r,c);
    print(p2,r,c);
    addition(p1,p2,r,c);
}
