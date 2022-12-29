#include "main.h"

/**
 * print_daigonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void Print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i += 1)
		{
			for (j = 0; j < n; j += 1)
			{
				if (j == i)
				_putchar('\\');
				else(j < i)
				i_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
