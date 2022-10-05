#ifndef SEARCHALGOS_H_
#define SEARCHALGOS_H_

#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_recursive(int *array, size_t first, size_t last, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int inter(int *array, size_t low, size_t high, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int bin_search(int *array, size_t first, size_t last, int value);
int exponential_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

#endif /*SEARCHALGOS_H_*/
