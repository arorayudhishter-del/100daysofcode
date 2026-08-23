#include <Stdio.h>
int main()
{
    int a, b;
    int calc;
    int sum, prod, subs, div;
    printf("Enter numbere here:");
    scanf("%d", &a);
    printf("Enter numbere here:");
    scanf("%d", &b);
    printf("Choose a function you wana perfrom here +, -, *, /:");
    scanf("%d", &calc);
    switch(calc)
    {
        case 1:
        sum = a + b;
        printf("The sum of the numberes is here: %d", sum);
        break;
        case 2:
        subs = a - b;
        printf("The sum of the numberes is here: %d", subs);
        break;
        case 3:
        prod = a * b;
        printf("The sum of the numberes is here: %d", prod);
        break;
        case 4:
        div = a / b;
        printf("The sum of the numberes is here: %d", div);
        break;
    }
    return 0;
}