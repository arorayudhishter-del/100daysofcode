#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0], i;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
