#include "main.h"

/**
 * cap_string - capitalizing all words of a string
 * @str : string pointer
 * Return: Always 0.
 */
char *cap_string(char *str)
{

	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' '
		    || str[a] == '\t'
		    || str[a] == '\n'
		    || str[a] == '.'
		    || str[a] == ','
		    || str[a] == '!'
		    || str[a] == '?'
		    || str[a] == '"'
		    || str[a] == '('
		    || str[a] == ')'
		    || str[a] == '{'
		    || str[a] == '}')
		{
			a++;
			if (str[a] >= 'A' && str[a] <= 'Z')
				a++;
			else if (str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 32;
			a--;
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	return (str);
}
