#include "sort.h"

/**
 * lomuto_partition - Lomuto partition scheme for Quick sort
 * @array: The array to be partitioned
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 *
 * Return: The index of the pivot element
 */
int lomuto_partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j, temp;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, high - low + 1);
            }
        }
    }

    if (array[i + 1] != array[high])
    {
        temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        print_array(array, high - low + 1);
    }

    return (i + 1);
}
