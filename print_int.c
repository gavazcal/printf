#include "holberton.h"

/**
 * print_int - prints out integers
 * @args: arguments
 * Return: integer
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int numsize = 0;

	print_int2(num);

	if (num < 0)
		numsize = 1;
	while (num != 0)
	{
		num /= 10;
		numsize++;
	}
	return (numsize);
}

/**
 * print_int2 - the other thing
 * @n: number
 * Return: an int
 */

int print_int2(int n)
{
	int num;

	num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10 != 0)
	{
		print_int2(num / 10);
	}
	_putchar(num % 10 + '0');

	return (num);
}
