#include <stdio.h>

int main()
{
    printf("[ Time Converter ] \n");
    printf("Enter the time as in seconds:");
    int seconds;
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int seconds_remaining = seconds % 60;

    printf("\n[ OUTPUT ] \n");
    printf("Input seconds: %d\n", seconds);
    printf("Output Time: %02d:%02d:%02d\n", hours, minutes, seconds_remaining);

    return 0;
}