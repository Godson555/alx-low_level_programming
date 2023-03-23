#include "main.h"
/**
 * print_most_numbers - print numbers except a and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
