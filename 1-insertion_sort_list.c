#include "sort.h"
#include <math.h>
/**
  * insertion_sort_list = pointer of list
  *
  * Return: void
  */
void insertion_sort_list(listint_t **list)
{
	listint_t = head, current, p;
	
	if (list == NULL || list->next == NULL)
		return list;

	while (list != NULL)
	{
		list = list->next;
		if (head == NULL || current->n < head->n)
		{
			current->next = head;
			head = current;
		}
		else
		{
			p = head;
			while (p != NULL)
			{
				if p->next == NULL || current->n < p->next->n)
				{
					current->next = p->next;
					p->next = current;
					break;
				}
				p = p->next;
			}
		}
	}
	return (head);
}
