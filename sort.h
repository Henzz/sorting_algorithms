#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prints an array of integers */
void print_array(const int *array, size_t size);
/* Prints a list of integers */
void print_list(const listint_t *list);
/* Sorts an array of integers in ascending order usint the Bubble Sort algorithm */
void bubble_sort(int *array, size_t size);
/* Sorts a doubly linked list of integers in ascending order using the Insertion Sort algorithm */
void insertion_sort_list(listint_t **list);
/* Sorts an array of integers in ascending order using the Selection sort algorithm */
void selection_sort(int *array, size_t size);
#endif /* SORT_H */
