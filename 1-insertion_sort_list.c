#include "sort.h"
#include <math.h>
/**
  * insertion_sort_list = pointer of list
  *
  * Return: void
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
			sorted = sorted->prev;
			swapNodes(&current, &next);
		}
		
		if (sorted == NULL)
		{
			*list = current;
			sorted = current;
		}
		else
		{
			next = sorted->next;
			sorted->next = current;
			current->prev = sorted;
			sorted = current;
		}

		current = next;
	}
}
