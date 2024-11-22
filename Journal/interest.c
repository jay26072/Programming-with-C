//W A P TO CALCULATE SIMPLE INTREST FORMULA-> I=(P*R*N)/100

#include<stdio.h>

void main()
{
	int p,r,n;
	float i;
	
	printf("Enter Value of Principle: ");
	scanf("%d",&p);
	
	printf("Enter Value of Rate: ");
	scanf("%d",&r);
	
	printf("Enter Value of Time: ");
	scanf("%d",&n);
	
	i=(p*r*n)/100;
	printf("Simple Intrest %.2f",i);
}

