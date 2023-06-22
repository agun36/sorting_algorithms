#include "sort.h"
#include <stdio.h>


/**
  * bubble_sort - contains array pointer and size
  *
  * Return: void
  */
void bubble_sort(int *array, size_t size)
{
	long unsigned int i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}

		if (swapped == false)
			break;
	}
}
