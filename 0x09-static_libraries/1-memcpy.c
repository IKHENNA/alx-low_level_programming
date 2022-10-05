#include "main.h"

/**
 * _memcpy - copies n bytes from memory area @src
 * to memory area @dest.
 * @dest: memory area to copy @src into..
 * @src: memory area to copy from.
 * @n: the number of bytes to copy from memory area @src.
 * Return: pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}
	return (dest);
}
