#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a side of the triangle here:");
    scanf("%d", &a);
    printf("Enter a side of the triangle here:");
    scanf("%d", &b);
    printf("Enter a side of the triangle here:");
    scanf("%d", &c);
    if( a == b && b == c && a == c )
    {
        printf("The traingle with these sides os a equilateral triangle");
    }

    else if( a == b || b == c || a == c)
    {
        printf("The triangle with these sides is isoscele");
    }
    else
    {
        printf("The trangle is scalene");
    }
    return 0;
}