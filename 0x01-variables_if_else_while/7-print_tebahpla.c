#include <stdio.h>
/**
 * main -Entry point
 * Description: 'print alphabets in lowercase using putchar function'
 * Return: always 0
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
