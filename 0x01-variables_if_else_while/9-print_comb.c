#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Program that prints single digit numbers in base 10'
 * Return: always 0
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
