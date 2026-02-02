#include <stdio.h>

int main() {
    int n, i;
    
    int passsum = 0;

    int failcount = 0;

    if (scanf("%d", &n) != 1) {

        return 1;
    }

    int scores[n];

    
    for (i = 0; i < n; i++) { 

        if (scanf("%d", &scores[i]) != 1) {

            return 1;

        }


        if (scores[i] >= 50) {

            passsum += scores[i];

        } else {

            failcount++; 
        }
    }

    printf("Passing Scores Sum: %d\n", passsum);

    printf("Failing Students Count: %d\n", failcount);

    return 0;
}