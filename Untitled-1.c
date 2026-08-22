#include <Stdio.h>
int main()
{
    int a, b;
    printf("Emter a number here:")
    scanf("%d", &a);
    printf("Emter a number here:")
    scanf("%d", &b);
    c = a + b;
    a = a - b;
    b = a - b;
    printf("The numbers after being reversed is gonne be %d and %d", a, b);
    return 0;
    
    
}