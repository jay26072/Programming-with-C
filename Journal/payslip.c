/* Write a c program to prepare pay slip using following data.Da = 10% of basic, Hra = 7.50% of  
basic, Ma = 300, Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross - Pf. */

#include<stdio.h>
void main()
{
    float basic,da,hra,ma,pf,gross,nt;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
    da=basic*0.1;
    hra=basic*0.075;
    ma=300;
    pf=basic*0.125;
    gross=basic+da+hra+ma;
    nt=gross-pf;
    printf("Gross Salary = %.2f\n",gross);
    printf("Net Salary = %.2f",nt);
}