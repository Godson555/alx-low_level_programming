#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Program that prints all posible different combinationsof two digits' 
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b && a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
