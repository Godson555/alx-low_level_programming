#include "main.h"
<<<<<<< HEAD

int actual_prime(int n, int i);

/**
 * is_prime_number - Entry point
 * @n: p1
=======
int actual_prime(int n, int i);
/**
 * is_prime_number - checks for prime number
 * @n: input value
>>>>>>> c7e284286ddb2b1a7b1a2e290d3d87fbbf716c29
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
<<<<<<< HEAD
 * actual_prime - Entry point
 * @n: p1
 * @i: p2
=======
 * actual_prime - checks if a number is prime
 * @n: input value
 * @i: iterator
>>>>>>> c7e284286ddb2b1a7b1a2e290d3d87fbbf716c29
 * Return: 1 or 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
