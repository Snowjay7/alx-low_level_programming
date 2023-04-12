#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of integers using
 * the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: Null, -1the first index where @value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t j, u, s;

	if (array == NULL)
		return (-1);

	for (u = 0, s = size - 1; s >= l;)
	{
		j = u + (((double)(s - u) / (array[s] - array[u])) * (value - array[u]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			s = j - 1;
		else
			u = j + 1;
	}

	return (-1);
}
