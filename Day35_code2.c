#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}