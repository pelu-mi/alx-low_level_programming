#ifndef GUARD_H
#define GUARD_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - Singly linked list
 * @str: string
 * @len: Length of string
 * @next: pointer to next node
 * Description - Singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	list_t *next;
} list_t;


/* Functions for project */
size_t print_list(const list_t *h);



#endif
