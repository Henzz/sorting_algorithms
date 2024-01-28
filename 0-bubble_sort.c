#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integeres in ascending order using
 * the Bubble Sort algorithm.
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int temp, swapped;

	if (array == NULL || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		size--;
	}
}
