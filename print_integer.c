#include "main.h"

/**
 * print_integer - Prints an integer using recursion.
 * @args: A list of arguments pointing to the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	count += print_number(num);

	return (count);
}
