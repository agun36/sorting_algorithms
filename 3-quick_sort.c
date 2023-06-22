#include "sort.h"

/**
  * quick_sort - array of int with size
  *
  * Return: void
  */
void quick_sort(int *array, size_t size)
{
	size_t i;

	if (size < i)
	{
		int pi = partition(array, size, i);

		quick_sort(array, size, pi - 1);
		quick_sort(array, pi + 1, i);
	}
}
