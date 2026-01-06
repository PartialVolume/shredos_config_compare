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
void compare_files(FILE *fileA, FILE *fileB, char *argv[]) {
    char line[MAX_LINE_LENGTH];

    // Print lines that exist in file A but not in file B
    printf("****************************************************************\n");
    printf("**                                                            **\n");
    printf("** Lines in %s but not in %s:                                 **\n", argv[1], argv[2]);
    printf("**                                                            **\n");
    printf("****************************************************************\n");
    rewind(fileA);
    while (fgets(line, MAX_LINE_LENGTH, fileA)) {
        if (!line_exists(fileB, line)) {
            printf("%s", line);
        }
    }

    // Print lines that exist in file B but not in file A
    printf("****************************************************************\n");
    printf("**                                                            **\n");
    printf("** Lines in %s but not in %s:                                 **\n", argv[2], argv[1]);
    printf("**                                                            **\n");
    printf("****************************************************************\n");
    rewind(fileB);
    while (fgets(line, MAX_LINE_LENGTH, fileB)) {
        if (!line_exists(fileA, line)) {
            printf("%s", line);
        }
    }
}

int main(int argc, char *argv[]) {
    FILE *fileA, *fileB;

    if (argc != 3) {
        fprintf(stderr, "Displays lines in first file but not in second and vice versa\n");
        fprintf(stderr, "Usage: %s <fileA> <fileB>\n", argv[0]);
        return 1;
    }

    fileA = fopen(argv[1], "r");
    if (fileA == NULL) {
        perror(argv[1]);
        return 1;
    }

    fileB = fopen(argv[2], "r");
    if (fileB == NULL) {
        perror(argv[2]);
        fclose(fileA);
        return 1;
    }

    // Compare the two files
    compare_files(fileA, fileB, argv);

    // Close the files
    fclose(fileA);
    fclose(fileB);

    return 0;
}

