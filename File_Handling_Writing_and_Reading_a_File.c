#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    // Create and open a text file for writing
    file = fopen("example.txt", "w");

    // Check if the file was created and opened successfully
    if (file == NULL) {
        printf("Error: Could not create or open the file.\n");
        return 1;
    }

    // Write some text to the file
    fprintf(file, "This file is created using File handling\n");
    fprintf(file, "Learning File I/O Operations\n");

    // Close the file
    fclose(file);

    printf("File created and written successfully.\n");

    // Open the text file for reading
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file for reading.\n");
        return 1;
    }

    // Read and print the content of the file
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}
