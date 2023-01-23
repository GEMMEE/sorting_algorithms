#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort in ascending order
 * @array: the array of integers to be sorted
 * @size: the size of the array
 *
 * Author: Jeba
 * Date: Jan 23, 2023
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped;
	int temp;

	if (!array || size < 2)
		return;

	/* loop twice to make pairwise comparisons */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 1; j < size; j++)
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		/* exit the loop if the integers are ordered */
		if (!swapped)
			break;
	}
}
