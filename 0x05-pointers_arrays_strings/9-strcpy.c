#include "main.h"
/**
 * _strcpy - copies str pointer
 * @dest: p 1
 * @src: p 2
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[i++])

		len++;
	for (i = 0; i <= len; i++)

		dest[i] = src[i];
	return (dest);
}
