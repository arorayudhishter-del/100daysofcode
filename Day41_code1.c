#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSum[3];
    int i, j;

    for(i = 0; i < 3; i++) {
        rowSum[i] = 0;
        for(j = 0; j < 3; j++) {
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(i = 0; i < 3; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
