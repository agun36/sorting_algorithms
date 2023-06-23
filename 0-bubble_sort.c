#include "sort.h"
#include <stdio.h>

/**
  * bubble_sort - sorts an array of integers in ascending order using the Bubble Sort algorithm
  * @array: pointer to the array to be sorted
  * @size: size of the array
  *
  * Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
