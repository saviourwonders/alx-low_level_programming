#include <stdio.h>

/**
 * main - prints combination of single digits number
 *
 * Return: Always 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits <= 10; digits++)
	{
		putchar((digits % 10) + '0');
		if (digits == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
