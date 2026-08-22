#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter one number: ");
    scanf("%d", &a);
    printf("Enter one number: ");
    scanf("%d", &b);
    printf("Enter one number: ");
    scanf("%d", &c);

    if (a >= b && a >= c) 
    {
        printf("A is the largest one!\n");
    } 
    else if (b >= a && b >= c) 
    {
        printf("B is the largest one!\n");
    } 
    else 
    {
        printf("C is the largest one!\n");
    }

    return 0;
}
