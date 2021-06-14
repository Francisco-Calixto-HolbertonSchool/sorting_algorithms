#include "sort.h"

/**
 * swap - function that swap two elements of an array
 * @i: array to order
 * @j: Starting index
 */

void swap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}
/**
 * partition - function that sorts an array of integers in ascending order
 * @arr: array to order
 * @l: Starting index
 * @r: ending index
 * @size: size of index
 * Return: middle of array
 */

int partition(int *arr, int l, int r, size_t size)
{
	int pivot = arr[r];
	int i = l - 1, j;

	for (j = l; j < r; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (arr[i + 1] > arr[r])
	{
		swap(&arr[i + 1], &arr[r]);
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 * rquick_sort - function that sorts an array of integers in ascending order
 * @arr: array to order
 * @l: Starting index
 * @r: ending index
 * @size: size of index
 */
void rquick_sort(int *arr, int l, int r, size_t size)
{
	int i;

	if (l >= r)
		return;
	i = partition(arr, l, r, size);
	rquick_sort(arr, l, i - 1, size);
	rquick_sort(arr, i + 1, r, size);
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: array to order
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	rquick_sort(array, 0, size - 1, size);
}
