#include "main.h"

/**
 * print_number - recursively prints the digits of an integer
 * @n: the integer to print
 *
 * Return: the number of digits printed
 */
int print_number(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
