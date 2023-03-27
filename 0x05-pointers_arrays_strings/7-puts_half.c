#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int a;
	int count = 0;

	for (a = 0; str[a] != '\0' ; a++)
		count++;
	if (count % 2 == 0)
	{
		for (a = count / 2 ; str[a] != '\0' ; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
	else
	{
		for (a = (count - 1) / 2 ; str[a] != '\0' ; a++)
		_putchar('\n');
	}
}
