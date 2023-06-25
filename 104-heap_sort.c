#include "sort.h"
/**
 * max_heap - Turn a binary tree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array/tree.
 * @base: The index of the base row of the tree.
 * @i: The max node of the binary tree.
 */
void max_heap(int *array, int size, int base, int i)
{
	int larg = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int temp;

	if (left < base && array[left] > array[larg])
		larg = left;
	if (right < base && array[right] > array[larg])
		larg = right;
	if (larg != i)
	{
		temp = array[i];
		array[i] = array[larg];
		array[larg] = temp;
		print_array(array, size);
		max_heap(array, size, base, larg);
	}
}
/**
 * heap_sort -  The main function to sort an array of given size
 * @array: array to sort
 * @size: size of the array
 **/
void heap_sort(int *array, size_t size)
{
	int temp, i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		max_heap(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		max_heap(array, size, i, 0);
	}
}
