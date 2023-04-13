#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - create array of chars
 * @text_content: NULL terminated string to be written to the file
 * @filenmae: file to be created
 *
 * Return: 1 if succesful, -1 if unsucessful
 */

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }
    
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd < 0) {
        return -1;
    }
    
    if (text_content != NULL) {
        ssize_t len = strlen(text_content);
        ssize_t bytes_written = write(fd, text_content, len);
        if (bytes_written != len) {
            close(fd);
            return -1;
        }
    }
    
    close(fd);
    return 1;
}
