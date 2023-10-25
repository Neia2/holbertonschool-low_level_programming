#include "main.h"
#include <stdio.h>
/**
* rev_string - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char c;

	if (!s)
		return;

	while (i < j)
	{
		c = s[i];

		i = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
