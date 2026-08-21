#include <stdio.h>
int main()
{
    int r;
    int area, circumfrence;
    printf("Enter the radius of the circle here:");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circumfrence = 2 * 3.14 * r;
    printf("The area of the circle is %d", area);
    printf("\nThe circumference is %d", circumfrence);
    return 0;
}