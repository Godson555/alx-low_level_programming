#include "main.h"
/**
 * _isalpha - 'Function that checks for alphabet character'
 * Return: 0
 * @c: Function parameter
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
