// W A P to generate firnt n number of fibonaci series.

#include<stdio.h>

void main()
{
	int n,fibo,i,t1=0,t2=1;
	fibo=t1+t2;//0+1=1
	
	printf("Enter Any Number: ");
	scanf("%d",&n);
	printf("%d %d",t1,t2);
	for(i=3;i<=n;i++)
	{
		printf(" %d",fibo);
		t1=t2;
		t2=fibo;
		fibo=t1+t2;
	}
}

