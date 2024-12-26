// 49.Write a program to merge two files into the third file.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1 = fopen("file.txt","r");
    f2 = fopen("file2.txt","r");
    f3 = fopen("file3.txt","w");
    while((ch = getc(f1)) != EOF)
    {
        putc(ch,f3);
    }
    while((ch = getc(f2)) != EOF)
    {
        putc(ch,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}