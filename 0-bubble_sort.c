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
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		print_array(array, size);
	}
}
