#include <stdio.h>

#define SIZE 3


void input_array(int arr[], int length);

void display_array_report(int arr[], int length);


int main(void) {

    int data[SIZE];

    printf("Enter %d integer elements for the array:\n", SIZE);

    input_array(data, SIZE);

    display_array_report(data, SIZE);

    return 0;
}//end main


void input_array(int arr[], int length) {

    int i;

    for (i = 0; i < length; i++) {

        printf("Element %d: ", i);

        scanf("%d", &arr[i]);
    }
}



void display_array_report(int arr[], int length) {

    int i;

    int *ptr = arr;   

    printf("\n--- ARRAY AND POINTER REPORT ---\n");

    printf("Index | Value (Direct) | Value (via Pointer) | Address\n");
   
    printf("----------------------------------------------------------\n");

    for (i = 0; i < length; i++) {
        
        printf("%5d | %14d | %19d | %p\n",
               i,
               arr[i],
               *(ptr + i),
               (ptr + i));
    }
}
