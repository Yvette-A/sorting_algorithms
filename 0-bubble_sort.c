#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, sorted;
	size_t i, len = size;

	if (array == NULL || size < 2)
	{
		return;
	}
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				sorted = 0;
			}
		}
		len--;
	}
}
