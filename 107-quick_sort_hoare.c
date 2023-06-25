#include "sort.h"
/**
 *q_partition - hoare partition sorting scheme implementation
 *@array: array
 *@low: first array index
 *@high: last array index
 *@size: size array
 *Return: return the position of the last element sorted
 */
int q_partition(int *array, int low, int high, int size)
{
	int temp;
	int start = low - 1, end = high + 1;
	int pivot = array[high];

	while (1)
	{

		do {
			start++;
		} while (array[start] < pivot);
		do {
			end--;
		} while (array[end] > pivot);
		if (start >= end)
			return (start);
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
}
/**
 *quick_sort - quck_sort algorithm implementation
 *@array: array
 *@low: first array index
 *@high: last array index
 *@size: array size
 */
void quick_sort(int *array, ssize_t low, ssize_t high, int size)
{
	ssize_t position = 0;

	if (low < high)
	{
		position = q_partition(array, low, high, size);
		quick_sort(array, low, position - 1, size);
		quick_sort(array, position, high, size);
	}
}
/**
 *quick_sort_hoare - prepare the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort(array, 0, size - 1, size);
}
