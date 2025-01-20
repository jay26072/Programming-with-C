// W A P READ FIVE PERSONS HEIGHT AND WEIGHT AND COUNT THE NUMBER OF PERSON HAVING HEIGHT GREATER THAN 170 AND WEIGHT LESS THAN 50.

#include<stdio.h>
void main()
{
    int i,height[5],weight[5],count;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter %d Peroson Height And Weight: ",i);
        printf("\nEnter Height: ");
        scanf("%d",&height[i]);
        printf("Enter Weight: ");
        scanf("%d",&weight[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(height[i]>170 && weight[i]<50)
		{
			count=+1;
		}
	}
	printf("\n Person Having Height Greater Than 170 And Weight Less Than 50: %d",count);
}
