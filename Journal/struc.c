// 36.Write a program to read structure elements from keyboard.

#include<stdio.h>

struct students
{
    char name[20];
    int roll_no;
    float marks;
};

void main()
{
    struct students s1;
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    printf("Enter Roll No: ");
    scanf("%d",&s1.roll_no);
    printf("Enter Marks: ");
    scanf("%f",&s1.marks);
	printf("\n\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f",s1.name,s1.roll_no,s1.marks);
}
