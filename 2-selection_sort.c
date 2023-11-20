#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t x;
	size_t j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		min = array + x;
		for (j = x + 1; j < size; j++)
		{
			min = (array[j] < *min) ? (array + j) : min;
		}

		if ((array + x) != min)
		{
			swap_ints(array + x, min);
			print_array(array, size);
		}
	}
}
