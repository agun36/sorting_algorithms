#include "sort.h"
#include <stdio.h>
/**
 * swap_node_head - Swap a node in a listint_t doubly-linked list
 *                   list of integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_head(listint_t **list, listint_t **tail, listint_t **jump)
{
	listint_t *temp = (*jump)->next;

	if ((*jump)->prev != NULL)
		(*jump)->prev->next = temp;
	else
		*list = temp;
	temp->prev = (*jump)->prev;
	(*jump)->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = *jump;
	else
		*tail = *jump;
	(*jump)->prev = temp;
	temp->next = *jump;
	*jump = temp;
}

/**
 * swap_node_tail - Swap a node in a listint_t doubly-linked
 *                    list of integers with the node behind it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_tail(listint_t **list, listint_t **tail, listint_t **jump)
{
	listint_t *temp = (*shaker)->prev;

	if ((*jump)->next != NULL)
		(*jump)->next->prev = temp;
	else
		*tail = temp;
	temp->next = (*jump)->next;
	(*jump)->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = *jump;
	else
		*list = *jump;
	(*jump)->next = temp;
	temp->prev = *jump;
	*jump = temp;
}

/**
 *cocktail_sort_list - this is a cocktail sort implementation
 *working on a double linked lists
 *@list: list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *jump;
	bool swapped = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (swapped == false)
	{
		swapped = true;
		for (jump = *list; jump != tail; jump = jump->next)
		{
			if (jump->n > jump->next->n)
			{
				swap_node_head(list, &tail, &jump);
				print_list((const listint_t *)*list);
				swapped = false;
			}
		}
		for (jump = jump->prev; jump != *list;
				jump = jump->prev)
		{
			if (jump->n < jump->prev->n)
			{
				swap_node_tail(list, &tail, &jump);
				print_list((const listint_t *)*list);
				swapped = false;
			}
		}
	}
}
