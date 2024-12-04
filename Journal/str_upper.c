#include<stdio.h>

void main()
{
	char n[100];
	int i;
	printf("Enter Any String: ");
	gets(n);
	
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>='a' && n[i]<='z')
		{
			printf("%c",n[i]-32);
		}
		else{
			printf("%c",n[i]);
		}
	}
	
}
