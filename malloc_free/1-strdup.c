#include "main.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{length++;
s++;
}
return (length);
}
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytest from src to be copied
 *
 * _strncpy: copies a string from dest to src
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 * Return: a pointer to the duplicated string, or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *_strdup;

if (str == NULL)
return (NULL);

_strdup = (char *)malloc(_strlen(str) + 1);

if (_strdup == NULL)
return (NULL);

_strncpy(_strdup, str, _strlen(str) + 1);
return (_strdup);
}
