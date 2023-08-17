#include "main.h"

/**
 * print_triangle - function prints triangle, using character #
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int o, k;

		for (o = 1; o <= size; o++)
		{
			for (k = o; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= o; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
