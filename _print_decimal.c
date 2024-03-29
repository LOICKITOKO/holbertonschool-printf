#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/*
 * _print_decimal - Prints the decimal representation of an integer.
 * @args: The list of arguments containing the integer to be printed.
 * Return: The number of characters printed.
 */
int _print_decimal(va_list args)
{
	int i = va_arg(args, int);
	int r = 0;
	if (i < 0)
	{
		_putchar('-');
		i = -i;
		r++;
	}
	r += _print_decimal_recursive(i);
	return (r);
}
