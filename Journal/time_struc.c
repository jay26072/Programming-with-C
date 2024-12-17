// 38.Define structure data type called time_struct containing three member’s integer hour, integer minute and integer second. Develop a program that would assign values to the individual number and display the time in the following format: 16: 40:51

#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};
void main()
{
    struct time_struct time;
    printf("Enter hour: ");
    scanf("%d", &time.hour);
    printf("Enter minute: ");
    scanf("%d", &time.minute);
    printf("Enter second: ");
    scanf("%d", &time.second);
    printf("\n");
    printf("Time: %d:%d:%d", time.hour, time.minute, time.second);
}


