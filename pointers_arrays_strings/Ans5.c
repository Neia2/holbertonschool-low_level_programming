#include "main.h"

/**
* rev_string - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int length = strelen(string);
	int middle = length / 2;
	char temp;

	for (int i = 0; i < middle; i++)
	{
		temp = string[i];
		string[i] = string[lengh - i - 1];
		string[lengh - i - 1] = temp;
	}
}
