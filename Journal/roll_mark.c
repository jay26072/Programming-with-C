// 26. W A P to read and store the roll no and marks of 20 students using array.

#include<stdio.h>
void main()
{
    int roll[20],mark[20],i;
    for(i=0;i<20;i++)
    {
        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);
        printf("Enter Marks of %d: ",i+1);
        scanf("%d",&mark[i]);
    }
    printf("\nStudent's No And Marks\n");
    printf("\nRoll No");
    printf("\t\tMarks\n");
    for(i=0;i<20;i++)
    {
        printf("\n%d ",roll[i]);
        printf("\t\t%d ",mark[i]);
    }
}
