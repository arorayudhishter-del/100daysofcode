#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the numbers till which you need to find the sum:");
    scanf("%d", &n);
    sum = n *(n + 1) / 2;
    printf("The sum of the natural numbers is : %d", sum);
    return 0;

}