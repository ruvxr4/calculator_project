#include <stdio.h>


int calculate_area(int length, int width);

int main() {
    int input_l;
    int input_w;
    int result_a;

    
    printf("Enter rectangle length (integer): ");
    scanf("%d", &input_l);

    printf("Enter rectangle width (integer): ");
    scanf("%d", &input_w);
    
    result_a = calculate_area(input_l, input_w);

    
    printf("\n--- RECTANGLE AREA REPORT ---\n");
    printf("Length: %d\n", input_l);
    printf("Width: %d\n", input_w);
    printf("Calculated Area: %d\n", result_a);

    return 0;
}


int calculate_area(int length, int width) {
    
    return length * width;
}