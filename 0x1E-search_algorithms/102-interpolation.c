#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of integers using
 * the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, n;

	if (!array)
		return (-1);

	while (*(array + h) != *(array + l))
	{
		n = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (n >= size)
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (*(array + n) < value)
			l = n + 1;
		else if (value < *(array + n))
			h = n - 1;
		else
			return (m);
	}

	return ((array[l] == value) ? (int)l : -1);
}
