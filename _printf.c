#include "holberton.h"

/**
 * _printf - main printf function
 * @format: the string passed
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);
	int idx = 0;
	int strlen = 0;
	char pointer;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			if (format[idx + 1] == '\0')
				return (-1);
			else if (format[idx + 1] == '%')
			{
				_putchar('%');
				idx++;
				strlen += 1;
			}
			else
			{
				pointer = format[idx + 1];
				f = find_type(&pointer);
				if (f == NULL)
					return (strlen);
				else
				{
					strlen += f(args);
					idx++;
				}
			}
		}
		else
		{
			write(1, &format[idx], 1);
			strlen += 1;
		}
	}
	va_end(args);
	return (strlen);
}
