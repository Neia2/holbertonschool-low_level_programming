#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *_strdup;

if (str == NULL)
return NULL;

_strdup = (char *)malloc(strlen(str) + 1);

if (_strdup == NULL)
return NULL;

strcpy(_strdup, str);
return (_strdup);
}
