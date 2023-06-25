#include "sort.h"
/**
 * merge - Sort a subarray of integers.
 * @array: A subarray of an array of integers to sort.
 * @output: A buffer to store the sorted subarray.
 * @low: The front index of the array.
 * @mid: The middle index of the array.
 * @high: The back index of the array.
 */
void merge(int *array, int *output, size_t low, size_t mid, size_t high)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(array + low, mid - low);

	printf("[right]: ");
	print_array(array + mid, high - mid);

	for (i = low, j = mid; i < mid && j < high; k++)
		output[k] = (array[i] < array[j]) ? array[i++] : array[j++];
	for (; i < mid; i++)
		output[k++] = array[i];
	for (; j < high; j++)
		output[k++] = array[j];
	for (i = low, k = 0; i < high; i++)
		array[i] = output[k++];

	printf("[Done]: ");
	print_array(array + low, high - low);
}

/**
 *mergeSort - function that sorts an array of integers
 *@array: array of integers
 *@output: temp array used in merge, was created outside to
 *optimize reducing the system calls
 *@low: fisrt element index
 *@high: last element index
 *Return: void
 */
void mergeSort(int *array, int *output, int low, int high)
{
	size_t middle;

	if (high - low > 1)
	{
		middle = low + (high - low) / 2;
		mergesort(array, output, low, middle);
		mergesort(array, output, middle, high);
		merge(array, output, low, middle, high);
	}
}

/**
 * merge_sort - Sort an array of integers in ascending
 *              order using the merge sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the top-down merge sort algorithm.
 */
void merge_sort(int *array, size_t size)
{
	int *new_list;

	if (array == NULL || size < 2)
		return;

	new_list = malloc(sizeof(int) * size);
	if (new_list == NULL)
		return;

	mergeSort(array, new_list, 0, size);

	free(new_list);
}
