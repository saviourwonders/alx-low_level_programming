#include <stdio.h>

/**
 * main - prints small case and then upper case
 *
 * Return: always 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
