#include "holberton.h"
/**
 * print_single_char - prints one char
 * @args: arguments
 * Return: 1 on success
 */
int print_single_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * print_string - prints a string
 * @args: arguments
 * Return: chars printed
 */
int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int idx;

	if (string == NULL)
	{
		string = "(null)";
	}
	for (idx = 0; string[idx]; idx++)
	{
		_putchar(string[idx]);
	}
	return (idx);
}

/**
 * print_int prints out integers
 * @args: arguments
 * Return: integer
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int numsize = 0;
	int *intsize; /* For alt method */

	print_int2(num);

	if (num < 0)
		numsize = 1;
	while (num =! 0)
	{
		num /= 10;
		numsize++;
	}
	return (numsize);

	/* Alternative reverse/forward printing */

	/* Can use a count function to find digits then create array based on digit size */

	intlimit = malloc(sizeof(int) * 20); /* 20 is int limit */
	/* or */
	intlimit = malloc(sizeof(int) * numsize); /* Memory efficienct */

	int idx;
	int intcopy;

	for (idx = 0; num =! 0; idx++)
	{
		intcopy = num % 10;
		intsize[idx] = intcopy;
		num /= 10;
	}
	while (idx > -1)
	{
		_putchar(intsize[idx] = '0';
	idx--;
	}
	free(intsize);
	return (num);
}

/* 2nd function */

int print_int2(int n)
{
	unsigned int num;

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
}

/**
 * print_modulus - prints a % when asked
 * @args: arguments (unused)
 * Return: 1
 */
int print_modulus(va_list __attribute__((unused)) list)
{
	return(_putchar('%');
}
