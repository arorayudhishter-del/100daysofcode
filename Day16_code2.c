#include <stdio.h>
int main(void)
{
    int num, orignal, remainder;
    int reversed = 0;
    printf("Entere a number here:");
    scanf("%d", &num);
    orignal = num;
    while(num > 0)
    {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
        
    }
    if(orignal == reversed)
    {
        printf("The input is a palindrom number");
    }
    else
    {
        printf("The number is not a palindrom number");
    }
    return 0;
    
}