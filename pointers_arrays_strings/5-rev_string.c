#include "main.h"
#include <stdio.h>
/**
* rev_string - Reverse a string
* @s: The string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int a = 0, b = 0;
	char c, d;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < a; b++)
	{
		c = s[b];
		d = s[a];
		s[b] = d;
		s[a] = c;
		a--;
	}
}
