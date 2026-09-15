#include <stdio.h>

int main() {
    int arr[] = {123, 455, 789, 455, 122};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[10] = {0};
    int i, num, digit, maxDigit = 0;

    for (i = 0; i < n; i++) {
        num = arr[i];
        if (num < 0) num = -num;
        while (num > 0) {
            digit = num % 10;
            freq[digit]++;
            num /= 10;
        }
    }

    for (i = 1; i < 10; i++)
        if (freq[i] > freq[maxDigit]) maxDigit = i;

    printf("Most frequent digit: %d (occurs %d times)\n", maxDigit, freq[maxDigit]);

    return 0;
}
