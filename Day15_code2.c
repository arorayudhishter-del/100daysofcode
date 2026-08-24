#include <stdio.h>
int main()
{
    int num, reverse = 0, remainder;
    printf("Entere a number here:");
    scanf("%d", &num);
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10; 
    }
    printf("The reverse of thr number is: %d", reverse);
    return 0;
}