#include <stdio.h>
int main()
{
    int f, c;
    printf("Enter the temprature in celcius");
    scanf("%d", &c);
    f = (((c * 9) / 5 ) + 32);
    printf("the temprature in farenhiht is %d", f);
    return 0;
}