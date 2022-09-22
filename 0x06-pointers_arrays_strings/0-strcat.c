#include "main.h"

/**
 * _strcat - concatenates the string pointed to by the src string
 * @dest: a pointer to the string to be concatenated
 * @src: the source string to be appended to dest
 *
 * Return: a pointer to the destination string dest
 */

char *_strcat(char *dest, char *src)

{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
