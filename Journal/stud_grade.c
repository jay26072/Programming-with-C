// W A P TO READ MARKS FROM KEYBORD AND DISPLAY EQUIVALENT THAT ACCORDING TO FOLLOWING TABLE

#include<stdio.h>

void main()
{
	int m1,m2,m3,m4,m5,m6,total;
	float per;
	
	printf("Enter Marks Of Sub1: ");
	scanf("%d",&m1);
	
	printf("\nEnter Marks Of Sub2: ");
	scanf("%d",&m2);
	
	printf("\nEnter Marks Of Sub3: ");
	scanf("%d",&m3);
	
	printf("\nEnter Marks Of Sub4: ");
	scanf("%d",&m4);
	
	printf("\nEnter Marks Of Sub5: ");
	scanf("%d",&m5);
	
	printf("\nEnter Marks Of Sub6: ");
	scanf("%d",&m6);
	
	total=m1+m2+m3+m4+m5+m6;
	per=total/6;
	
	printf("\n Percentage Is: %.2f",per);
	
	if(per<=70)
	{
		printf("\nDistinction");
	}
	else if(per<=60)
	{
		printf("\nFirst Class");
	}
	else if(per<50)
	{
		printf("\nPass");
	}
	else{
		printf("\nFail");
	}
}