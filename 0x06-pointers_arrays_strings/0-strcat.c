#include "main.h"
#include <stdio.h>

/**
 * _strcat - writes function that concatenates two strings
 * @dest: first string
 * @src: string to be concatenated
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len 2 = strlen(src);

	for (i = 0; i <= len2; i++)
{
	dest[len1 + i] = src[i];
}
return (dest);
}
