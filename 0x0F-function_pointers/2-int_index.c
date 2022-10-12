#include "function_pointer.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: If no element matches or size <= 0 - -1
 *	   Otherwise - The index of the first element for which
 *	   the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
