#include <stdio.h>

#define DAYS 7 


void getTemp(int temps[], int n);

int main() {
    int daily_temp[DAYS];

    int i;

    int max_temp;

    getTemp(daily_temp, DAYS);

    max_temp = daily_temp[0]; 

    printf("\n--- DAILY TEMPERATURE REPORT ---\n");

    printf("Recorded Temperatures (C): ");

    for (i = 0; i < DAYS; i++) {

        printf("%d ", daily_temp[i]); 

        
        if (daily_temp[i] > max_temp) {

            max_temp = daily_temp[i];
        }
    }

    printf("\n");

    printf("Maximum Temperature Found: %d C\n", max_temp);

    
    if (max_temp >= 35) {

        printf("Weather is HOT!\n");

    } else {

        printf("Weather is MODERATE.\n");
    }

    return 0;
}


void getTemp(int temps[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter temperature for Day %d: ", i + 1);
        scanf("%d", &temps[i]);
    }
}