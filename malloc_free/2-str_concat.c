#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
char *result;
if ((s1 == 0) && (s2 == 0))
return (NULL);

result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (result == NULL)
return (NULL);

strcpy(result, s1);
strcat(result, s2);
return (result);
}

