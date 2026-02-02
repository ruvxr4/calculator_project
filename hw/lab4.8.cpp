#include <stdio.h>

#define MAX_SIZE 10

#define UNVISITED 0

#define VISITED 1

int main() {

    int data[MAX_SIZE];

    int status[MAX_SIZE]; 

    int n, i, j, count;

    
    for(i = 0; i < MAX_SIZE; i++) {

        status[i] = UNVISITED;
    }

    
    printf("Enter the number of elements (N, max %d): ", MAX_SIZE);
    
    if (scanf("%d", &n) != 1) return 1;

   
    if (n > MAX_SIZE || n < 1) {
        
        n = MAX_SIZE;

    }

    printf("Enter %d integer numbers:\n", n);

    for(i = 0; i < n; i++) {

        printf("Element %d: ", i + 1);

        scanf("%d", &data[i]);

    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");

    printf("Total elements recorded (N): %d\n", n);

    printf("Recorded Numbers: ");

    for(i = 0; i < n; i++) {

        printf("%d ", data[i]);

    }

    printf("\n");

    printf("--- FREQUENCY TABLE ---\n");

    printf("Number | Frequency\n");

    printf("-------|----------\n");

    
    for (i = 0; i < n; i++) {
        
        if (status[i] == VISITED) {

            continue; 
        }

        count = 1; 

        for (j = i + 1; j < n; j++) {

            if (data[i] == data[j]) {

                count++;            

                status[j] = VISITED;

            }
        }

        printf("%d | %d\n", data[i], count);

    }

    return 0;
}