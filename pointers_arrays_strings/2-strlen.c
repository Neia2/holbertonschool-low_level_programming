#include "main.h"
#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string
 * @s: string of the lenght
 * Return: lenght
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{length++;
s++;
}
return (length);
}
