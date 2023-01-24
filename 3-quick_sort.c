#include "sort.h"
/**
*quick_sort - sort array
*/
void quick_sort(int *array, size_t size)
{
	quick_Sort(array, 0, size - 1, size);
}
/**
*quick_Sort - sort an array
*/
void quick_Sort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high) 
	{
		pi = partition(arr, low, high, size);

		quick_Sort(arr, low, pi - 1, size);

		quick_Sort(arr, pi + 1, high, size); 
	}
}

int partition(int *arr, int low, int high, size_t size)
{

	int pivot = arr[high];
	int i, j, temp;  

	i = low - 1;

	for (j = low; j < high; j++)
	{

	        if (arr[j] < pivot)
		{
            		i++;
            		temp = arr[i];
            		arr[i] = arr[j];
            		arr[j] = temp;
	    		print_array(arr, size);
        	}
    	}
    	temp = arr[++i];
    	arr[i] = arr[high];
    	arr[high] = temp;

	return (i);
}
/*void quick_Sort(int *array, size_t size, size_t count) {

    int pivot = array[size - 1];
    int i = 0, j = 0, k = size - 1;

    if (size < 2)
	return;

    for (; j < k; j++) {
        if (array[j] <= pivot) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
	    print_array(array, count);
        }
    }

    array[size - 1] = array[i];
    array[i] = pivot;


    quick_Sort(array, i, count);
    quick_Sort(array + i + 1, size - i - 1, count);
}*/
