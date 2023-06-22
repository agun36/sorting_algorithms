#include "sort.h"
#include <math.h>

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
		return;

	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next;
	listint_t *temp1, *temp2, *temp3;

	while (current != NULL)
	{
		next = current->next;
		sorted = current->prev;

		while (sorted != NULL && sorted->n > current->n)
		{
			temp1 = sorted->prev;
			temp2 = current->next;
			temp3 = current->prev;

			if (sorted->prev != NULL)
				sorted->prev->next = current;
			if (current->next != NULL)
				current->next->prev = sorted;

			current->next = sorted;
			current->prev = sorted->prev;
			sorted->next = temp2;
			sorted->prev = current;

			sorted = temp1;
			if (temp1 != NULL)
				temp1->next = current;
			if (temp2 != NULL)
				temp2->prev = sorted;
			if (temp3 != NULL)
				temp3->next = sorted;
			if (sorted == NULL)
				*list = current;

			print_list(*list);
		}

		current = next;
	}
}
