#include <stdio.H>
int main()
{
    int a;
    printf("Enter a number here:");
    scanf("%d", &a);
    if(a % 2 == 0)
    {
        printf("The entred number is a even");
    
    }
    else
    {
        printf("The entred numbere is a odd numbere");
    }
    return 0;
}