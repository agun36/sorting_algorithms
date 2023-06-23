#include "sort.h"

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
	int temp;

	for (i = 0; i < size; i++)
		for (j = 0; i < size - 1; j++)
			if (array[i] > array[i + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
}
