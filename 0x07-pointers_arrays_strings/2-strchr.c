#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 *
 * Return: pointer to first occurrence of the character if c is found.
 * if  c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)

	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
