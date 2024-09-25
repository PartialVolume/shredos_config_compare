#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Function to check if a line exists in the file
int line_exists(FILE *file, const char *line) {
    char buffer[MAX_LINE_LENGTH];
    rewind(file);  // Reset file pointer to beginning of the file
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        if (strcmp(buffer, line) == 0) {
            return 1;  // Line exists
        }
    }
    return 0;  // Line does not exist
}

// Function to compare files A and B
void compare_files(FILE *fileA, FILE *fileB) {
    char line[MAX_LINE_LENGTH];

    // Print lines that exist in file A but not in file B
    printf("******************************\n");
    printf("**                          **\n");
    printf("** Lines in A but not in B: **\n");
    printf("**                          **\n");
    printf("******************************\n");
    rewind(fileA);
    while (fgets(line, MAX_LINE_LENGTH, fileA)) {
        if (!line_exists(fileB, line)) {
            printf("%s", line);
        }
    }

    // Print lines that exist in file B but not in file A
    printf("\n******************************\n");
    printf("**                          **\n");
    printf("** Lines in B but not in A: **\n");
    printf("**                          **\n");
    printf("******************************\n");
    rewind(fileB);
    while (fgets(line, MAX_LINE_LENGTH, fileB)) {
        if (!line_exists(fileA, line)) {
            printf("%s", line);
        }
    }
}

int main() {
    FILE *fileA, *fileB;

    // Open the files
    fileA = fopen("A.txt", "r");
    fileB = fopen("B.txt", "r");

    if (fileA == NULL || fileB == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Compare the two files
    compare_files(fileA, fileB);

    // Close the files
    fclose(fileA);
    fclose(fileB);

    return 0;
}

