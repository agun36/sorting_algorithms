#include "sort.h"

/**
 * swapNodes - Swaps two nodes in a doubly linked list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swapNodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
	{
		node1->prev->next = node2;
	}
	else
	{
		*list = node2;
	}
	
	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
