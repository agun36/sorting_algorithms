#include "sort.h"

/**
  * insertion_sort_list = pointer of list
  *
  * Return: void
  */
void insertion_sort_list(listint_t **list)
{
	int i, key, j;

	for (i = 1; i < list; i++)
	{
		key = listint_t[i];
		j = i - 1;

		while (j >= 0 && listint_t[j] > key)
		{
			listint_t[j + 1] = listint[j];
			j = j - 1;
			print_list(list);
		}
		listint_t[j + 1] = key;
	}
}
