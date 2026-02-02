#include <stdio.h>


#define SIZE 5

void getNumbers(int arr[], int n);

void printClassificationReport(int arr[], int n);

int main() {
    
    int numbers[SIZE];

    getNumbers(numbers, SIZE);

    printClassificationReport(numbers, SIZE);

    return 0;
}


void getNumbers(int arr[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        printf("Enter integer number %d: ", i + 1);

        scanf("%d", &arr[i]);
    }
}


void printClassificationReport(int arr[], int n) {

    int i;

    int even_count = 0;

    int odd_count = 0;

    printf("\n--- NUMBER CLASSIFICATION REPORT ---\n"); 

    printf("Recorded Numbers: ");

    for (i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);

        
        if (arr[i] % 2 == 0) {

            even_count++; 

        } else {

            odd_count++;  

        }
    }

    printf("\n"); 
    
    printf("Total Even Numbers Found: %d\n", even_count);

    printf("Total Odd Numbers Found: %d\n", odd_count);
}