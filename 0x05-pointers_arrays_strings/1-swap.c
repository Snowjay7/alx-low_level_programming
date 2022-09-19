#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: value to be evaluate.
 * @b: value to be evaluate.
 * Return: not.
 */
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
