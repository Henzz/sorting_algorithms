#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions the array using the Lomuto scheme
 *
 * @array: The array to be partitioned
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 *
 * Return: The pivot index
 */
int partition(int *array, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, high + 1);
		}
	}

	swap(&array[i + 1], &array[high]);
	print_array(array, high + 1);

	return (i + 1);
}

/**
 * quick_sort_recursive - Recursive function to perform quick sort
 *
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 */
void quick_sort_recursive(int *array, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high);
		quick_sort_recursive(array, low, pivot - 1);
		quick_sort_recursive(array, pivot + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick Sort algorithm with the Lomuto partition scheme.
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_sort_recursive(array, 0, size - 1);
}
