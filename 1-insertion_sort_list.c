#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->prev;

		while (temp != NULL && temp->n > current->n)
		{
			temp->next = current->next;

			if (current->next != NULL)
				current->next->prev = temp;

			current->prev = temp->prev;
			current->next = temp;
			
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;

			temp->prev = current;
			temp = current->prev;
			print_list(*list);
		}

		current = current->next;
	}
}
