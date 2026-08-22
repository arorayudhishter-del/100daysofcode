#include <stdio.h>
int main()
{
    char charac;
    printf("Enter a number here:");
    if(scanf("%c", &charac) != 1)
    {
        printf("Invalid input");
        return 1;
    }
    if(charac >= 'a' && charac <= 'z')
    {
        printf("The input entered is a lower case letter");

    }
    else if(charac >= 'A' && charac <= 'Z')
    {
        printf("Enterd input is a uppercase letter ");

    }
    else if(charac >= 0 && charac <= 9)
    {
        printf("Entere input is a number");
    }
    else
    {
        printf("Enterd input is a special case letter");
    }
    return 0;
}
