#include "main.h"

/**
 * print_line - Draws line with (_)
 * @n: number of lines
 *
 * Return: 0
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
