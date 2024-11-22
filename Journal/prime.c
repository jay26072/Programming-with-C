//W A P TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT.

#include<stdio.h>
void main()
{
    int num,i,flag=0;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is Prime Number",num);
    }
    else
    {
        printf("%d is Not Prime Number",num);
    }
}