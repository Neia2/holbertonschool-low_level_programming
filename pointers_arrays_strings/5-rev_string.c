#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that prints a string, in reverse.
 * @s: string
 */
void rev_string(char *s)
{
int lenght = 0;
int i;

	while (s[lenght] != '\0')
	{
	lenght++;
	}

	for (i = lenght - 1; i >= 0; i--)
	{
	printf("%c", s[i]);
	}
	printf("\n");
}
