/* 46.Write a program to read n integer number from keyboard and store them into a file All.txt. 
Read All.txt file, separate even and odd numbers and store them into files Even.txt and 
Odd.txt respectively and display contents of all the three files.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp1, *fp2, *fp3;
    int i, n, num;
    char ch;

    fp1 = fopen("Even.txt", "w+");
    fp2 = fopen("Odd.txt", "w+");
    fp3 = fopen("All.txt", "w+");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp3, "%d\n", num);
    }

    rewind(fp3);

    while (fscanf(fp3, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(fp1, "%d\n", num);
        } else {
            fprintf(fp2, "%d\n", num);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    // Display contents of All.txt
    fp3 = fopen("All.txt", "r");
    if (fp3 == NULL) {
        printf("Could not open file All.txt\n");
        exit(1);
    }
    printf("Contents of All.txt:\n");
    while ((ch = fgetc(fp3)) != EOF) {
        putchar(ch);
    }
    fclose(fp3);

    // Display contents of Even.txt
    fp1 = fopen("Even.txt", "r");
    if (fp1 == NULL) {
        printf("Could not open file Even.txt\n");
        exit(1);
    }
    printf("Contents of Even.txt:\n");
    while ((ch = fgetc(fp1)) != EOF) {
        putchar(ch);
    }
    fclose(fp1);

    // Display contents of Odd.txt
    fp2 = fopen("Odd.txt", "r");
    if (fp2 == NULL) {
        printf("Could not open file Odd.txt\n");
        exit(1);
    }
    printf("Contents of Odd.txt:\n");
    while ((ch = fgetc(fp2)) != EOF) {
        putchar(ch);
    }
    fclose(fp2);
}
