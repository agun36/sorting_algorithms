#include "sort.h"
/**
  * selection_sort - sort  array of integer in ascending order
  * @size: size of array
  * @array: list with numbers
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	size_t  min_idx;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
