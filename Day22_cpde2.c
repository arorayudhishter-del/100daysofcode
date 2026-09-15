#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;      // 1, 3, 5, 7, ...
        int denominator = 2 * i;        // 2, 4, 6, 8, ...
        sum += (double)numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
