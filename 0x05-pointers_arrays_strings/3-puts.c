#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void _puts(char *str)
{
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
