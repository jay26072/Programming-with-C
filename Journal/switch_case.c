// W A P To read number 1 to 7 and print respective base from sunday to sat.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5: 
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;    
        case 7:
            printf("Saturday");
            break;
        default:
            printf("\nInvalid Choice");
    }
}
