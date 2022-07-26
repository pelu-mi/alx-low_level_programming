#ifndef GUARD_H
#define GUARD_H

#include <stdio.h>
#include <stdlib.h>

/* Required Libraries */
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/* Functions for tasks */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Putchar function */
int _putchar(char c);


#endif
