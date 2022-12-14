#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * 
 * Desription: Singly linked list node structure
 * for task
*/

typedef struct listint_s
{
        int n;
        struct listint_s *next;
} listint_t;

void reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

#endif /* LISTS _H */
