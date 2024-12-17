// 37.Define a structure type struct personal that would contain person name, joining date and salary using this structure to read this information of 5 people and print the same on screen.

#include <stdio.h>
#include <string.h>

struct personal
{
    char name[30];
    char date[20];
    float salary;
} person[5];

void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s",&person[i].name);
        printf("Enter Joining Date: ");
        scanf("%s",&person[i].date);
        printf("Enter Salary: ");
        scanf("%f", &person[i].salary);
    }
    for (i = 0; i < 5; i++)
    {
        // printf("\n\nName:%s",person[i].name);
        // printf("Joining Date:%s",person[i].date);
        // printf("Salary:%.2f",person[i].salary);
        printf("\n\nName: %s\nJoining Date: %s\nSalary: %.2f", person[i].name, person[i].date, person[i].salary);
    }
}

