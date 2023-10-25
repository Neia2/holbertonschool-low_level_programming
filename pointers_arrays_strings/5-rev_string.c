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
	int j = strelen (str) -1;


	if (!str)
	return 0;

	while (i < j) 	
	{
	char c = str [i];
	str [i] = str[j];
	str[j] = c;
	i++;
	j--;
	}
}
