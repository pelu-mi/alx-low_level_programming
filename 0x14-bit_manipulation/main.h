#ifndef GUARD_H
#define GUARD_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);



/* Helper Functions */
int _putchar(char c);

#endif
