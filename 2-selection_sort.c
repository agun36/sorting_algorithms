#include "sort.h"
#include <stdio.h>

/**
 * swap - contains two pointers of integer xp and yp
 *
 * @xp: return pointer integer
 * @yp: return second pointer integer
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
  * selection_sort - sort  array of integer in ascending order
  *
  * Return: void
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		if (min_idx != i)
			swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
					
