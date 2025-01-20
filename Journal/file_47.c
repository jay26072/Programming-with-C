// 47.Write a program to accept the contents from the user and store it in the file one line at a time and print the contents of the file.

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "w+");

    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter the contents: ");
    while ((ch = getchar()) != '\n') 
    {
        fputc(ch, fp);
    }

    fclose(fp);
}
