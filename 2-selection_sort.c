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
	/*int swap;*/

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}
		swap(&array[x], &array[min]);
		print_array(array, size);
	}
}
/**
 * swap - Function to swap two integere
 * @xp: pointer to the first integer
 * @yp: Pointer to the second integer
 */
void swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}
