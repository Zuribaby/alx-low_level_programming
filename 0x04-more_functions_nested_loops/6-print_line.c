#include "main.h"

/**
 * print _line - the shortest distance between two points is a straight line
 * @n: times straight is printed
 *
 * Return: nothing on success
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}

