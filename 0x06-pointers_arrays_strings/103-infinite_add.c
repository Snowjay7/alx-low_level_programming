#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
