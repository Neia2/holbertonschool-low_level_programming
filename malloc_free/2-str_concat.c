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
char *s1, *s2;
int i;
int dest;

if ((s1 == NULL) && (s2 == NULL))
return (NULL);

while (i < s1[i] != '\0')
    {
        dest = ([s1 + i] = s2[i]);
        i++;
    }
dest[s1 + i] = '\0';
return (dest);
}














/**{
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
/*
