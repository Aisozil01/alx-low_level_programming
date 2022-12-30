#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i += 1)
		{
			for (j = i; j < size; j += 1)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j += 1)
			{
				_pucthar('#');
			}

			_putchar('\n');
		}
	}
}
