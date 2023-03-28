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
	password 
