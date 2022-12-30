#include <stdio.h>

/**
 * main - print small letter in reverse order
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
