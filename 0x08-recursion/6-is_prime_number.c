#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - funtion determines if number is a prime
 * @n: number
 * Return: 1 if number is prime and 0 if not
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - function checks if numbers is prime
 * @n: number
 * @i: iteration value
 * Return: 1 if prime and 0 otherwise
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
