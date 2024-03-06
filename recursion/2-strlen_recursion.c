#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - returns the length of a string.
 *@s: string to be recursevely
 *Return: stringlengh
 */
int _strlen_recursion(char *s)
{
int length = 0;

while (*s != '\0')
{ length++;
s++; 
}
return (length);
}
