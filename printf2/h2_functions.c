#include "main.h"

/**
 * print_d - Prints integers
 *
 * Return:
 */

int print_d(int n)
{
	int rem, q, n2 = 0;
	int sign = 1;
	int count = 0;

	if (n < 0)
	{
		n = (-1 * n);
		sign = -1;
	}

	/* Reverses the number eg 234 -> 432*/

	while (n > 0)
	{
		rem = n % 10;
		q = n / 10;
		n2 = (n2 * 10) + rem;
		n = q;
	}

	n = n2;

	if (sign == -1)
	{
		_putchar('-');
		count++;
	}

	/*Prints from last digit to first digit*/

	while(n > 0)
	{
		rem = n % 10;
		_putchar('0' + rem);
		count++;
		n = n / 10;
	}
	return (count);
}

/**
 * counter - Counts number of 1 & 0.
 * @i: integer to count
 *
 *Return: Count of binaries.
 */

int counter(int n)
{
	int c = 0;
	
	while (n != 0)
	{
		n = n / 2;
		c++;
	}
	return (c);
}

/**
 * print_b - Converts and prints integer into binary
 * @n: Integer to convert
 *
 * Return: Count of binaries
 */

int print_b(int n)
{
	int len = counter(n);
	int array[len];
	int i = 0;
	int rem;
	int *p = &len;

	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		array[*p] = rem;
		i++;
	}
	while (i >= 0)
	{
		_putchar('0' + array[i]);
		i--;
	}
	return (len);
}
