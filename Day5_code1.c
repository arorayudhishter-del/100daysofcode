#include <stdio.h>
int main()
{
    int sec;
    printf("Enter the time here in seconds:");
    scanf("%d", &sec);
    int hours = sec / 3600;
    int minutes = (sec / 3600) / 60;
    int seconds = sec % 60;
    printf("%02d:%02d:%02d", hours, minutes, seconds);
    return 0;
}