// 39.Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them.

#include <stdio.h>

struct student_record
{
    char name[20];
    char branch[20];
    int total_marks;
};

void main()
{
    struct student_record s[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Name: ");
        scanf("%s", &s[i].name);
        printf("Enter Branch: ");
        scanf("%s", &s[i].branch);
        printf("Enter Total Marks: ");
        scanf("%d", &s[i].total_marks);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\nName: %s\nBranch: %s\nTotal Marks: %d\n", s[i].name, s[i].branch, s[i].total_marks);
    }
    }

