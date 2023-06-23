#include "sort.h"

/**
  * swap - contains two pointers of integer xp and yp
  *
  *@xp: return pointer integer
  *@yp: return second pointer integer
  * Return: void
  */
void swap(int *xp, int *yp)
{
	int temp;

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
	size_t i, j = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < j - 1; j++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				print_array(array, size);
				swapped = false;
			}
		}
		j--;
	}
}
