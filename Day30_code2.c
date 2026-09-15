#include <stdio.h>

int main() {
    int arr[] = {12, -7, 0, 45, -3, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 0, neg = 0, zero = 0, i;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", pos);
    printf("Negative elements = %d\n", neg);
    printf("Zero elements = %d\n", zero);

    return 0;
}
