#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located,
 * -1 if array is NULL or value is not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, down = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (down <= high && value >= array[down] && value <= array[high])
	{
		pos = down + (((double)(high - down)
					/ (array[high] - array[down])) * (value - array[down]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			down = pos + 1;
		else
			high = pos - 1;
	}
	pos = down + (((double)(high - down)
					/ (array[high] - array[down])) * (value - array[down]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
