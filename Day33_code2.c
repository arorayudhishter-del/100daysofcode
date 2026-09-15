#include <stdio.h>

int main() {
    int arr[100] = {2, 5, 8, 12, 16, 23};
    int n = 6;
    int element, i, pos;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }
    if (i == n) pos = n;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
