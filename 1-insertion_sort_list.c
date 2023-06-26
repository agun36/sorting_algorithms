#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swagged, temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swagged = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swagged = 1;
				print_array(array, size);
			}
		}
		if (swagged == 0)
			break;
	}
}
