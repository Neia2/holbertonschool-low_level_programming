#include "main.h"
#include <stdio.h>

/**
*main - Write a program that prints _putchar
*Return: this returns 0
*/

int main(void)
{
	int i, j;

	j = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d for\n", i);
		while (j < 5)
		{	
			j++;
			printf("%d while\n", j);
		}
	}
}
