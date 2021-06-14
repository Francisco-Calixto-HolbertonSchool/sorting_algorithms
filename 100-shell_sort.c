#include "sort.h"

/**
 * knuth_det - function that swap two elements of an array
 * @size: Starting index
 * Return: knuth value to be used
 */

size_t knuth_det(size_t size)
{
	size_t k;

	k = 1;
	while (k <= (size / 2))
	{
		k = (k * 3) + 1;
	}
	k = (k - 1) / 3;
	return (k);
}

/**
 * shell_sort - function that swap two elements of an array
 * @array: array to order
 * @size: Starting index
 */

void shell_sort(int *array, size_t size)
{
	size_t h, i, j;
	int temp;

	h = knuth_det(size);
	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= h && array[j - h] > temp)
			{
				array[j] = array[j - h];
				j = j - h;
			}
			array[j] = temp;
		}
		print_array(array, size);
		h = (h - 1) / 3;
	}
}
