#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])

			{
			str[i] = b[j];
			}
		}
	}
	return (str);
}
