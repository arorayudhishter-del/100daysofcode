#include <stdio.h>
int main()
{
    int n;
    int prod = 1;
    printf(" Entere the value of n here:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        prod = prod * i;
        
    }
    printf("%d is the sum of these", prod);
    return 0;
}