#include "sort.h"
/**
*selection_sort - sorting using selection sort
*
*@array: array to sort
*@size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, swapi;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapi = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[swapi])
				swapi = j;
		}
		if (swapi != i)
		{
			temp = array[i];
			array[i] = array[swapi];
			array[swapi] = temp;
			print_array(array, size);
		}
	}
}
