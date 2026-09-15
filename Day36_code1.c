#include <stdio.h>

int main() {
    int rows, cols;

    // Get dimensions from the user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array (maximum size 100x100 for simplicity)
    int matrix[100][100];

    
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    
    printf("\nThe matrix you entered is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}