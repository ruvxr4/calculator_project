#include <stdio.h>


struct student{
    int id;
    int math_score;
    int science_score;
    int english_score;
    int total_score;
}typedef ss;


char calculate_grade(int total_score);
void calculate_average(int total_score, float *avg);

int main(void) {

    ss student;
    char final_grade;
    float final_avg;

    
    printf("Enter Student ID: ");
    scanf("%d", &student.id);

    printf("Enter Math Score (out of 100): ");
    scanf("%d", &student.math_score);

    printf("Enter Science Score (out of 100): ");
    scanf("%d", &student.science_score);

    printf("Enter English Score (out of 100): ");
    scanf("%d", &student.english_score);

  
    student.total_score = student.math_score +
        student.science_score +
        student.english_score;

    
    final_grade = calculate_grade(student.total_score);

    calculate_average(student.total_score, &final_avg);

   
    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("Student ID: %d\n", student.id);
    printf("Math Score: %d\n", student.math_score);
    printf("Science Score: %d\n", student.science_score);
    printf("English Score: %d\n", student.english_score);
    printf("Total Score: %d\n", student.total_score);
    printf("Average Score: %.2f\n", final_avg);
    printf("Final Grade: %c\n", final_grade);

    return 0;
} //end main

char calculate_grade(int total_score) {
    if (total_score >= 250) {
        return 'A';
    } 
    else if (total_score >= 200) {
        return 'B';
    } 
    else {
        return 'C';
    }
} //end function

void calculate_average(int total_score, float *avg) {
    *avg = (float) total_score / 3.0f;
} // end function
