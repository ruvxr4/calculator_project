#include <stdio.h>

int main() {
    int n, i;

    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int scores[n];

    
    for (i = 0; i < n; i++) {
        
        if (scanf("%d", &scores[i]) != 1) {

            return 1;
        }
    }

   
    for (i = n - 1; i >= 0; i--) {
        
        printf("%d\n", scores[i]);
    }

    return 0;
}