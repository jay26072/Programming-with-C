#include<stdio.h>
void main()
{
	char str[10];
	int i;
	printf("Enter String: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		
	}
	int j;
	for(j=i;j>=0;j--)
	{
		printf("%c",str[j]);
	}
}
