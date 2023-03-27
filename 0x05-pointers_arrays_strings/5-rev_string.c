#include "main.h"
/**
 * rev_string - prints reverse string
 * @s: parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0' ; a++)
	{
		count++;
	}
	for (a = count; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
