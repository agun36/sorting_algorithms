#include "sort.h"
#include <stdio.h>
/**
 * quicksort_recursive - Recursive helper function for quick_sort
 * @array: The array to be sorted
 * @low: The starting index of the partition to be sorted
 * @high: The ending index of the partition to be sorted
 */
void quicksort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high);
		
		quicksort_recursive(array, low, pi - 1);
		quicksort_recursive(array, pi + 1, high);
		
		print_array(array + low, high - low + 1);
    }
}
