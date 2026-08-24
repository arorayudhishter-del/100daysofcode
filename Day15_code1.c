#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter a number here:");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Factorial can't be negative");

    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial till the number is %d : %d", n, fact);
    }
    return 0;
}