#include "sort.h"

/**
  * partition - array of integer containing two int
  *
  * Return: i + 1
  */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];

	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
