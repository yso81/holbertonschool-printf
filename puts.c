#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed.
 */
int _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
