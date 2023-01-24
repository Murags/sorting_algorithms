#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 *
 * @array: array to sort
 * @size: size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		quick_Sort(array, 0, size - 1, size);
}

/**
 * quicksort - implementation of quicksort algorithm
 *
 * @array: array to sort
 * @start: start of array
 * @end: end of array
 * @size: size of array
 */
void quick_Sort(int *array, int start, int end, size_t size)
{
	int i;

	if (start < end)
	{
		i = partition(array, start, end, size);
		quick_Sort(array, start, i - 1, size);
		quick_Sort(array, i + 1, end, size);
	}
}

/**
 * partition_array - function that divides array into two
 *
 * @array: array to partition
 * @start: starting point of the array
 * @end: end point of the array
 * @size: size of array
 *
 * Return: index of the pivot
 */
int partition(int *array, int start, int end, size_t size)
{
	int i, temp, j, pivot = array[end];

	j = start - 1;

	for (i = start; i < end; i++)
		if (array[i] <= pivot)
		{
			j++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (j < i)
				print_array(array, size);
		}

	j++;
	array[end] = array[j];
	array[j] = pivot;
	if (j < end)
		print_array(array, size);
	return (j);
}
