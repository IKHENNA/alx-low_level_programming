#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src:the source string
 * @n: the copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)

{

	int a = 0, src_len = 0;

	while (src[a++])
		src_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = src_len; a < n; a++)
		dest[a] = '\0';

	return (dest);

}
