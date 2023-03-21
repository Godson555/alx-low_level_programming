#include "main.h"
/**
 * print_last_digit - 'Function that print last digit'
 * @a: Function parameter
 * Return: b
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -(b);
	}
	else
	{
		b = b;
	}
	_putchar(b + '0');
	return (b);
}

