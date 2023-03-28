#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random valid password
 * Description: generates password
 * Return: 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, b, c;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		b = (sum - 2772) / 2;
		c = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			b++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + b))
			{
				password[index] -= b;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + c))
			{
				password[index] -= c;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
