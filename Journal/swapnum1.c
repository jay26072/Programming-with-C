// W A P TO INTERCHANGE TWO NUMBERS WITH TEMP.

#include<stdio.h>
void main()
{
	int a,b,temp;
	
	printf("Enter Value Of A:");
	scanf("%d",&a);
	
	printf("Enter Value Of B:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAfter Swap \n");
	printf("Value Of A:%d\n",a);
	printf("Value Of B:%d\n",b);		
}
