#include "main.h"
/**
 * _abs - 'Function that prints absolute number'
 * @a: Function parameter
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else
	{
		a = a;
	}
	return (a);
}

