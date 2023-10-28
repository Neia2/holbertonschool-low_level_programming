#include "main.h"

/**
 * string_toupper - changing string to upper function
 * @n: string pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
			i++;
		}
	}
	return (n);
}
