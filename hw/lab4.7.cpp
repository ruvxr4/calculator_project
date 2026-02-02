#include <stdio.h>

#define MAX_SIZE 10

int getFrequency(int data[], int n, int search_value);

int main() {
    
    int data[MAX_SIZE];

    int n, search_value, count, i;

    
    
    printf("Enter the number of elements (N, max %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1) return 1;

    if (n > MAX_SIZE || n < 1) {

        n = MAX_SIZE;
    }

    
    printf("Enter %d integer numbers:\n", n);

    for (i = 0; i < n; i++) {

        printf("Element %d: ", i + 1);

        scanf("%d", &data[i]);
    }

    printf("Enter the Search Value: ");

    scanf("%d", &search_value);

    
    count = getFrequency(data, n, search_value);

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");

    printf("Total elements recorded (N): %d\n", n);

    printf("Recorded Numbers: ");

    for (i = 0; i < n; i++) {

        printf("%d ", data[i]); 
    }

    printf("\n");

    printf("Search Value: %d\n", search_value);

    printf("Frequency Count: %d\n", count);

    return 0;
}


int getFrequency(int data[], int n, int search_value) {

    int i;

    int count = 0;

    
    for (i = 0; i < n; i++) {

        if (data[i] == search_value) {

            count++; 

        }
    }
    
    return count; 
}