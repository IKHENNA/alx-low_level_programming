#include "main.h"

/**
 * _strlen - main entry.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)

{

	int i;

	for (i = 0 ; s[i] != '\0' ; i++)

		;

	return (i);

}
