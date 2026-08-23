#include <stdio.h>
int main()
{
    int perc;
    printf("Enter a number here:");
    scanf("%d", &perc);
    if( perc >= 90 && perc <= 100)
    {
        printf("Grade : A");
    }
    else if( perc >= 80 && perc <= 89)
    {
        printf("Grade : B");
    }
    else if( perc >= 70 && perc <= 79)
    {
        printf("Grade : C");
    }
    else if( perc >= 60 && perc <= 60)
    {
        printf("Grade : D");
    }
    else
    {
        printf("Grade : F");
    }
    return 0;
}