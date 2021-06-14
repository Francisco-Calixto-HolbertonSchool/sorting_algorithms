#include "sort.h"
void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int partition(int *arr, int l, int r, size_t size)
{
        int pivot = arr[r];
        int i = l - 1, j;

        for (j = l; j < r; j++)
        {
                if (arr[j] <= pivot)
                {
                        i++;
                        swap(&arr[i], &arr[j]);
                        print_array(arr, size);
                }
        }
        swap(&arr[i + 1], &arr[r]);
        return i + 1;
}
void rquick_sort(int *arr, int l, int r, size_t size)
{
        if (l >= r)
                return;

        int i = partition(arr, l, r, size);
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