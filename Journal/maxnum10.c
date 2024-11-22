// W A P TO FIND OUT THE MAXIMUM AND MINIMUM NUMBER FROM GIVEN 10 NUMBERS

#include<stdio.h>
void main()
{
    int num[10],i,max,min;
    for(i=0;i<10;i++)
    {
    printf("Enter %d number: ",i);
    scanf("%d",&num[i]); //5 20,10,45,99,1,63,48,55,78
    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    printf("\nMaximum number is: %d",max);
    printf("\nMinimum number is: %d",min);

        
}
