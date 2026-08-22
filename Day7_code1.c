#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year here:");
    scanf("%d", &year);
    if( year % 400 == 0  || (year% 4 == 0 && year % 100 != 0))
    {
        printf("The year is  an leap year");
    }
    else
    {
        printf("Th year entred number is not a leap year");
    }
    return 0;
}