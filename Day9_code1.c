#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter coefficient a: ");
    scanf("%d", &a);
    printf("Enter coefficient b: ");
    scanf("%d", &b);
    printf("Enter coefficient c: ");
    scanf("%d", &c);

    int D = (b * b) - (4 * a * c);

    if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2.0 * a);
        double root2 = (-b - sqrt(D)) / (2.0 * a);
        printf("Roots are real and different: %.2f , %.2f\n", root1, root2);
    } 
    else if (D == 0) {
        double root = -b / (2.0 * a);
        printf("Roots are real and equal: %.2f\n", root);
    } 
    else {
        printf("Roots are imaginary (no real solution)\n");
    }

    return 0;
}
