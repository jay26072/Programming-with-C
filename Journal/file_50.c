// 50.Program for deleting the spaces from the contents of file.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char ch;
    
    fp=fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if (ch != ' ')
        {
            printf("%c", ch);
        }
    }
    fclose(fp);
}