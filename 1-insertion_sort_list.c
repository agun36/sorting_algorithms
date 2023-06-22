#include "sort.h"
#include <math.h>

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next = NULL;
	
	if (*list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;

		while (sorted != NULL && sorted->n > current->n)
		{
			swapNodes(&sorted, &current);
			print_list(*list);
		}

		if (sorted == NULL)
		{
			*list = current;
			sorted = current;
		}
		else
		{
			current->prev = sorted;
			sorted->next = current;
			sorted = current;
		}

		current = next;
	}
}
