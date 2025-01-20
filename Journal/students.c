
// W A P To Calculate average and the total of 5 student for three subject (for loop)

#include<stdio.h>
void main()
{
	int i,total,avg,arr1[5],arr2[5],arr3[5];
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Students Marks %d: ",i);
//		m1
		scanf("%d",&arr1[i]);
//		m2
		scanf("%d",&arr2[i]);
//		m3
		scanf("%d",&arr3[i]);
	}
	printf("\nId");
	printf("\t\tSub1");
	printf("\t\tSub2");
	printf("\t\tSub3");
	printf("\t\tTotal");
	printf("\t\tAverage\n\n");
	
	for(i=1;i<=5;i++)
	{
		printf("%d",i);
		printf("\t\t%d",arr1[i]);
		printf("\t\t%d",arr2[i]);
		printf("\t\t%d",arr3[i]);
		total=arr1[i]+arr2[i]+arr3[i];
		printf("\t\t%d",total);
		avg=total/3;
		printf("\t\t%d",avg);
		printf("\n");
	}
}
