#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet;

for (alphabet = 97 ; alphabet <= 122 ; alphabet++)
if (alphabet != 101 && alphabet != 113)
{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
