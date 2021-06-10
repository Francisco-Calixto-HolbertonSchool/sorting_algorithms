#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 *
 * @array: array to sort
 * @size: array size {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}
 */

void bubble_sort(int *array, size_t size)
{
	size_t c;
	int temp, flag;

	if ((!array) || (size == 1))
		return;

	while (1 == 1)
	{
		flag = 0;
		for (c = 1; c < size; c++)
		{
			if (array[c - 1] > array[c])
			{
				temp = array[c - 1];
				array[c - 1] = array[c];
				array[c] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}
