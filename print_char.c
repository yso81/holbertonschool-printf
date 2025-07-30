#include "main.h"

/**
 * print_char - Prints a character
 * @args: A list of arguments pointing to the character to be printed
 *
 * Return: 1, the length of the character.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
