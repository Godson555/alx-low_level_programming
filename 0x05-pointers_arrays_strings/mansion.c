#include "main.h"
#include <stdio.h>
void rev_string(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while(a--)
		_putchar(s[a]);
}
