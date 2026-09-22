#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, distinct = 1;

    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 3; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
