// W A P TO ENTER A DISTANCE IN TO KILOMETRE AND CONVERT IT IN TO METER, FEET, INCHES AND CENTIMETRE.

#include<stdio.h>
void main()
{
    float km,m,ft,in,cm;
    printf("Enter Distance In Kilometre: ");
    scanf("%f",&km);
    m=km*1000;
    ft=km*3280.84;
    in=km*39370.1;
    cm=km*100000;
    printf("Distance In Metre = %.2f",m);
    printf("\nDistance In Feet = %.2f",ft);
    printf("\nDistance In Inches = %.2f",in);
    printf("\nDistance In Centimetre = %.2f",cm);
}