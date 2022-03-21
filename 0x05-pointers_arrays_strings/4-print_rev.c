#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int i;

	i =0;
	while (s[1] != '\0')
	{
		i++;
	}

	for (i = 1 - 1 ; i >= 0; i--)
	{
		putchar (s[i]);
	}

	_putchar ('\n');
}
