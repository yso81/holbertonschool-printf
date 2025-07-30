#include "main.h"

/**
 * print_string - Prints a string
 * @args: A list of arguments pointing to the string to be printed
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count;

	if (str == NULL)
		str = "(null)";

	count = _puts(str);
	return (count);
}
