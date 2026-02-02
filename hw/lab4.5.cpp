#include <stdio.h>

#define SIZE 6

void getData(int arr[], int n);

void print(int arr[], int n);

int main() {

    int data[SIZE];

    
    getData(data, SIZE);

    
    print(data, SIZE);

    return 0;
}


void getData(int arr[], int n) {

    int i;
    for (i = 0; i < n; i++) {
        
        printf("Enter integer number %d: ", i + 1);

        scanf("%d", &arr[i]);
    }
}


void print(int arr[], int n) {

    int i;

    int total_sum = 0; 

    
    printf("\n--- SUMMATION REPORT ---\n");

    printf("Recorded Numbers: ");

    for (i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);
        
        total_sum += arr[i];
    }

    printf("\n"); 
    
    
    printf("Total Sum of Numbers: %d\n", total_sum);
}