#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: p1
 * @src: p2
 * @n: p3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int j;
		int i;

		i = 0;
		while (dest[i] != '\0')
		{
			i++;
		}
		j = 0;
		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}

		return (dest);
}
