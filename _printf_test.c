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
	int idx = 0; strlen = 0;
	char spec;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (idx = 0; format[idx] != '\0' && format[idx] != '%'; idx++)
	{
		_putchar(format[idx]);
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
				spec = format[idx + 1];
				f = find_type(&spec);
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
