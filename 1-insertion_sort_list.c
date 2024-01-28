#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a listint_t doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * @n1: Pointer to the first node to swap.
 * @n2: Second node to wap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *			order using the Insertion Soft algorithm.
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev; /* Prev nodes */
	listint_t *current = *list; /* Current node to be sorted */

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		prev = current->prev; /* Prev node in the original list */

		while (prev != NULL && current->n < prev->n)
		{
			swap_nodes(list, &prev, current);
			print_list(*list);
		}
		current = current->next;
	}
}
