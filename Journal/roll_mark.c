// 26. W A P to read and store the roll no and marks of 20 students using array.

#include<stdio.h>
void main()
{
    int roll[20],mark[20],i;
    for(i=0;i<20;i++)
    {
        printf("Enter Roll No. %d: ",i+1);
        scanf("%d",&roll[i]);
        printf("Enter Marks of %d: ",i+1);
        scanf("%d",&mark[i]);
    }
    printf("\nEnter Student's No And Marks");
    for(i=0;i<20;i++)
    {
        printf("\nRoll No. %d: %d",i+1,roll[i]);
        printf("\nMarks of %d: %d",i+1,mark[i]);
    }
}