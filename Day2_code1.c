#include <stdio.h>
int main()
{
    int a, b;
    int area;
    int peremter;
    
    printf("Enter the number one here:");
    scanf("%d", &a);
    printf("Enter the number two here:");
    scanf("%d", &b);
    area = a * b;
    peremter = 2 * ( a + b);
    printf("The area of the rectangle is %d", area);
    printf("\nThe peremter of the rectangle is %d", peremter);
    return 0;
}