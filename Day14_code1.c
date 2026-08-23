#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf(" Entere the value of n here:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i+= 2)
    {
        sum = sum + i;
        
    }
    printf("%d is the sum of these", sum);
    return 0;
}