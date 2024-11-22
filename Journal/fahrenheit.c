// W A P TO COMPUTE FAHRENHEIT FROM CENTIGRADE (F=1.8*C +32).

#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter Temperature In Centigrade: ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temperature In Fahrenheit = %.2f",f);
}

