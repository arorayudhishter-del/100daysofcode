#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers here:");
    scanf("%d", &a);
    printf("Enter  numbers here:");
    scanf("%d", &b);
    int sum = a + b;
    printf("The sum of the numbers is %d", sum);
    return 0;
}