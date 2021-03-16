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
 * print_modulus - prints a % when asked
 * @args: arguments (unused)
 * Return: 1
 */
int print_modulus(va_list __attribute__((unused)) list)
{
	return (_putchar('%'));
}
