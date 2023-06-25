#include "sort.h"

/**
 * swapNodes - Swaps two nodes in a doubly linked list
 * @head: A pointer to the head
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swapNodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		insert = current->prev;
		while (insert != NULL && current->n < insert->n)
		{
			swapNodes(list, &insert, current);
			print_list((const listint_t *)*list);
			temp = insert->prev;
		}
		current = temp;
	}
}
