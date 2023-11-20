#include "sort.h"
/**
 * selection_sort - Function to sort an array of integers in
 * an ascending order using the selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}
		if (x != min)
		{
			temp = array[x];
			array[x] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
