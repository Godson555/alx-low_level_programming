#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: p1
 * @src: p2
 * @n: p3
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
