#include <stdio.h>
#include <string.h>


#define MAX_SIZE 100


int count_vowels_with_pointer(char *str);

int main() {

    char sentence[MAX_SIZE];
    
    int vowel_count;

    
    printf("Enter a sentence: ");

    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    
    sentence[strcspn(sentence, "\n")] = '\0';

    
    vowel_count = count_vowels_with_pointer(sentence);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}


int count_vowels_with_pointer(char *str) {

    int count = 0;
    
    while (*str != '\0') {
        
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++; 
        }
        
        str++; 

    }
    
    return count;
}