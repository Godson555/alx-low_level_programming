#include <stdio.h>
/**
 * main -Entry point
 * Description: "How to print two two digit numbers"
 * Return: 0
 */
int main(void)
{
	int a,b;

	for (a = 0; a < 98; a++)
	{
		for (b = 0; b < 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}