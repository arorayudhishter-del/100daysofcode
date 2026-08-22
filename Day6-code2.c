#include <Stdio.h>
int main()
{
    int a;
    printf("ENter a numbere here:");
    scanf("%d", &a);
    if( a > 0)
    {
        printf("It's a positive numbere");
    }
    else if( a < 0)
    {
        printf("The number entred is negative numbere");

    }
    else
    {
        printf("The numbere entred here is a 0");
    }
    return 0;
}