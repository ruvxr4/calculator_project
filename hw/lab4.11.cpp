#include <stdio.h>

#define ROWS 2

#define COLS 4

int main() {
    
    int matrix[ROWS][COLS];

    int total_sum = 0; 

    int i, j;
    
    
    printf("Enter %d integer numbers for the %dx%d matrix:\n", ROWS * COLS, ROWS, COLS);

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLS; j++) {

            printf("Enter element for Row %d, Col %d: ", i, j);
            
            scanf("%d", &matrix[i][j]);
            
            
            total_sum += matrix[i][j]; 
        }
    } 

    
    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n"); 

    printf("Recorded Matrix (%dx%d):\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLS; j++) {
            
            printf("%d ", matrix[i][j]); 
        }

        printf("\n"); 
    }
    
    printf("\nTotal Sum of all elements: %d\n", total_sum);

    return 0;
}