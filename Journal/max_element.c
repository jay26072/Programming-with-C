// 27. W A P to Find Maximum Element from 1-Dimensional Array.

#include <stdio.h>

void main()
{
    int a[10], i, max = 0;
    printf("Enter 10 number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum Element: %d", max);
}
