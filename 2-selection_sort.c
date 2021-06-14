#include "sort.h"

/**
 * selection_sort - sorts array of integers with the Selection sort algorithm
 * in ascending order
 * @array: array to sort
 * @size: size of array {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, c, tmp, flag;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = i + 1, c = i; j < size; j++)
		{
			if (array[c] > array[j])
			{
				c = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			tmp = array[i];
			array[i] = array[c];
			array[c] = tmp;
			print_array(array, size);
		}
	}
}
