#include "main.h"

/**
 * print_numbers - checks for digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c+=1)
	{
		_putchar(c);
	}
	_putchar('\n');
}
