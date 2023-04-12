#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: p1
 * @size: p2
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int b1 = 0;
	int b = 0;
	int c;

	for (c = 0; c < size; c++)
	{
		b1 = b1 + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", b1, b);
}
