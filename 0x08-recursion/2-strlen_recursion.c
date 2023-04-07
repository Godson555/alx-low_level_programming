#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: para 1
 * Return: a
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}


