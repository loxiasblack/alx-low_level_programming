#include "main.h"
/**
 * print_triangle - print the size of triangle
 * @size: the size
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 1, j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size;
			while (j--)
			{
				if (j >= i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
