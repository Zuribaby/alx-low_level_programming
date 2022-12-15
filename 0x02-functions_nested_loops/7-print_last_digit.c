#include <limit.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	r = -1;

	_putchar(r + '0');

	return (0);
}
