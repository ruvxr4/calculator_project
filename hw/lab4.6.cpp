#include <stdio.h>


#define STUDENTS 5 

int main() {
    int scores[STUDENTS];
    int sum = 0;
    float avg = 0.0;
    int above_avg_count = 0;
    int i;

   
    for (i = 0; i < STUDENTS; i++) {

        printf("Enter score for student %d: ", i + 1);

        if (scanf("%d", &scores[i]) != 1) 
        return 1;
        
        
        sum += scores[i]; 
    }

    
    avg = (float)sum / STUDENTS;

    
    for (i = 0; i < STUDENTS; i++) {

        if (scores[i] > avg) {

            above_avg_count++;

        }
    }

    
    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n");

    printf("Recorded Scores: ");
    
    for (i = 0; i < STUDENTS; i++) {

        printf("%d ", scores[i]); 
    }

    printf("\n");

    printf("Total Sum: %d\n", sum);

    printf("Average Score: %.2f\n", avg);
    
    printf("Number of Scores Above Average: %d\n", above_avg_count);

    return 0;
}