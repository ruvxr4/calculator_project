#include <stdio.h>

void swap_values(int *a, int *b);

int main(){

    int num1, num2;

    printf("enter value for num1: ");
    scanf("%d", &num1);

    printf("enter value for num2: ");
    scanf("%d", &num2);

    printf("\n----swapping report----\n");

    printf("before swap - num1: %d, num2: %d\n", num1, num2);

    swap_values(&num1, &num2);

    printf("after swap - num1: %d, num2: %d\n", num1, num2);

    return 0;
}

void swap_values(int *a, int *b) {
    
    int temp;

    temp = *a; 

    *a = *b;    

    *b = temp;  
}