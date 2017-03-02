#include "holberton.h"

/**
 * is_prime_number - returns 1 or 0 depending if prime number
 * @n: input number
 * Return: condition of number
 */
int is_prime_number(int n)
{
	int k = 2;

	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime(n, k));
}

/**
 * prime - determines prime number
 * @num: num to be tested
 * @i: itererator
 * Return: prime number determination
 */
int prime(int num, int i)
{

	if (num % i != 0 && i < num - 1)
	{
		return (prime(num, i + 1));
	}
	else if (num % i != 0 && i == num - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
