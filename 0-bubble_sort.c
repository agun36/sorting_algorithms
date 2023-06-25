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
	size_t temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble Sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t swapped;
	
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
