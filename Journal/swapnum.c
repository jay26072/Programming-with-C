// W A P to SWAP TO INTERCHANGE TWO NUMBERS WITHOUT THIRD VARIABLE.

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Any Number: ");
    scanf("%d",&a);
    printf("Enter Any Number: ");
    scanf("%d",&b);
    printf("\nBefore Swapping");
	printf("\nValue Of A : %d",a);
	printf("\nValue Of B : %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter Swapping");
    printf("\nValue Of A : %d",a);
	printf("\nValue Of B : %d",b);
}
