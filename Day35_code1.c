#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp[5];
    int n = 5, k = 2;

    k = k % n; 

    
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Print the rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}