#include "sort.h"
/**
*bubble_sort - sorts an array
*
*@array: array to sort
*@size: size of array
*/
void bubble_sort(int *array, size_t size)
{

	size_t i = 0, j = 0;
	int temp;

	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
