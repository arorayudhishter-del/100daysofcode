#include <stdio.h>

int main() {
    int arr[] = {12, 7, 9, 20, 33, 44, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0, i;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers count = %d\n", even);
    printf("Odd numbers count = %d\n", odd);

    return 0;
}
