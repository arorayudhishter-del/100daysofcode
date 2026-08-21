#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers here:");
    scanf("%d %d", &a, &b);
    int sum = a = b;
    int product = a * b;
    int subtract = a - b;
    int quetiont = a % b;
    printf("The sum of the numbers is %d", sum);
    printf("The product of the numbers is %d", product);
    printf("The diffrence of the numbers is %d", subtract);
    printf("The quetiont of the numbers is %d", quetiont);
    return 0;
}