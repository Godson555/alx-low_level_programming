#include "main.h"
/**
 * _memset - fill a memory block with a specific value
 * @s: p1
 * @b: p2
 * @n: p3
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
