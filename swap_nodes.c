#include "sort.h"
/**
  * swapNodes - contains two pointer with node1, node2
  *
  * Return: void
  */
void swapNodes(listint_t** node1, listint_t** node2)
{
	listint_t* temp = *node1;
	*node1 = *node2;
	*node2 = temp;

	if ((*node1)->prev != NULL)
		(*node1)->prev->next = *node1;

	if (*node2->next != NULL)
		(*node2)->next->prev = *node2;

	temp = *node1->prev;
	(node1)->prev = *node2->prev;
	(*node2)->prev = temp;

	temp = *node1->next;
	(*node1)->next = *node2->next;
	(*node2)->next = temp;
}
