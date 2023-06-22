#include "sort.h"

/**
  * selection_sort - sort  array of integer in ascending order
  *
  * Return: void
  */
void selection_sort(int *array, size_t size)
{
	int i, j, min_idx;

	for (i = 0; i < size-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		if (min_idx != i)
			swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
					
