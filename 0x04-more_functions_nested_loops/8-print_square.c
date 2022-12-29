#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of squares
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i += 1)
		{
			for (j = 0; j < size; j += 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
