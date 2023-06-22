#include "sort.h"
#include <math.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
		return;

	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;

		while (sorted != NULL && sorted->n > current->n)
		{
			swapNodes(&current, &next);
			sorted = sorted->prev;
		}

		if (sorted == NULL)
		{
			*list = current;
			sorted = current;
		}
		else
		{
			sorted->next = current;
			current->prev = sorted;
			sorted = current;
		}

		current = next;
	}
}
