#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number here:");
    scanf("%d", &a);
    printf("Enter the number here:");
    scanf("%d", &b);
    printf("The number before being swapped is %d and %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nThe number after being swapped is %d and %d", a, b);
    return 0;
}