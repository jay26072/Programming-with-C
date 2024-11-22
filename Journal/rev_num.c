// Write a program to reverse a number.

#include<stdio.h>

void main()
{
	int num,rev=0;
		
	printf("Enter Value :");
	scanf("%d",&num);
	while(num>0)
	{
		rev=(rev*10)+(num%10);
		num=num/10;
	}
	printf("%d",rev);
}
