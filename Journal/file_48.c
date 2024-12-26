// 48.Read a text file which name is given in command line and print the total number of character in each line and total number of lines in a file.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char ch;
    int i = 0, j = 0, count = 0;
    
    fp=fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if (ch=='\n')
        {
            printf("Total number of characters in line %d: %d\n", j + 1, count);
            count = 0;
            j++;
        }
        else
        {
            count++;
        }
    }
    printf("Total number of characters in file: %d\n", count);
    fclose(fp);
}
