#include "sort.h"
/**
 * shell_sort - function dat sorts an array of integers in ascending order
 * using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)
{
	size_t step, i, j;
	size_t temp;

	if (array == NULL || size < 2)
		return;

	for (step = 1; step < (size / 3);)
		step = step * 3 + 1;

	for (; step >= 1; step /= 3)
	{
		for (j = step; j < size; j++)
		{
			for (i = j; i >= step; i = i - step)
			{
				if (array[i - step] > array[i])
				{
					temp = array[i];
					array[i] = array[i - step];
					array[i - step] = temp;
				}
			}
		}
		print_array(array, size);
	}
}
