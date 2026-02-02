#include <stdio.h>

#define FILENAME "output_data.txt"

int write_data_to_file(const char *filename, int year);

void display_report(const char *filename);

int main(void) {

    int year = 2025;
    int status;

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", FILENAME);

   
    status = write_data_to_file(FILENAME, year);

   
    if (status != 0) {
        return 1;
    }

    printf("File writing complete.\n");

    
    display_report(FILENAME);

    return 0;
} //end main


int write_data_to_file(const char *filename, int year) {
    
    FILE *fptr;

    
    fptr = fopen(filename, "w");

    
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", filename);
        return 1;
    }

    
    fprintf(fptr, "Hello, C File Handling is easy.\n");
    fprintf(fptr, "%d\n", year);

    
    fclose(fptr);

    return 0;
}// end function



void display_report(const char *filename) {
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", filename);
}//end function