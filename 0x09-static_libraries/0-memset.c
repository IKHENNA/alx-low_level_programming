#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 * @s: a pointer to the memory area to be filled.
 * @b: the character to fill the memory are with.
 * @n: the number of byte to be filled.
 *
 * Return: a pointer to filled memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		s[i] = b;

	return (s);
}