#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/*
 * _print_decimal_recursive - Recursive prints the decimal digits of a number.
 * @num: The number whose digits are to be printed.
 * Return: The number of characters printed.
 */
int _print_decimal_recursive(int num)
{
	int allchar = 0;
	if (num / 10)
		allchar += _print_decimal_recursive(num / 10);
	{
		_putchar('0' + num % 10);
		allchar++;
	}
	return (allchar);
}
