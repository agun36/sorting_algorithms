#include "sort.h"

/**
  * insert - contains listint_t
  *
  * Return: void
  */
void insert(listint_t** head, int data)
{
	listint_t* newNode = (listint_t*)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode-prev = NULL;
	newNode->next = *head;
	
	if (*head != NULL)
	{
		*head->prev = newNode;
	}
	
	*head = newNode;
}
