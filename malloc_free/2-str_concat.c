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
int i = 0, j = 0;
char *result;

if (s1 == NULL && s2 == NULL)
return (NULL);

result = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);

if (result == NULL)
return (NULL);

while (s1[i] != '\0')
{
result[i] = s1[i];
i++;
}
while(s2[j] != '\0')
{
result[i] = s2[j];
i++;
j++;
}
result[i] = '\0';
return (result);
}


/**
* 
*{
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
*/
