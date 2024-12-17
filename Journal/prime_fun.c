// 33.Write a function in the program to return 1 if number is prime otherwise return 0.

#include<stdio.h>
int prime(int num);
void main()
{
    int num,ans;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    ans=prime(num);
    if(ans==1)
    {
        printf("%d",ans);
    }
    else
    {
        printf("%d",ans);
    }
}
int prime(int num)
{
    int i,flag=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
    }