#include <stdio.h>
int main()
{
    int a,b;
    int sum = a + b;
    int product = a * b;
    int subtract = a - b;
    int quetiont = a % b;
    printf("Enter a number here:");
    scanf("%d", &a);
    printf("Enter a number here:");
    scanf("%d", &b);
    
    printf("The sum of the numbers is %d", sum);
    printf("\nThe product of the numbers is %d", product);
    printf("\nThe diffrence of the numbers is %d", subtract);
    printf("The quetiont of the numbers is %d", quetiont);
    return 0;
}
//Adding
