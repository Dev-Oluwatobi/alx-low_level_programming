#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - this parameter reads a text file and prints it to stdout
 * @filename: this is a pointer to the file name
 * @letters: the number of letter to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char *buffer = malloc(letters + 1);
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
    if (bytes_read < 0) {
        fclose(file);
        free(buffer);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written < 0 || bytes_written != bytes_read) {
        fclose(file);
        free(buffer);
        return 0;
    }

    fclose(file);
    free(buffer);

    return bytes_read;
}
