#include "holberton.h"

/**
 * find_type - finds specifier and returns function
 * @format: char to check
 * Return: function or null
 */


int (*find_type(const char *format))(va_list)
{
	unsigned int idx = 0;

		find_sp_t type_finder[] = {
			{"c", print_single_char},
			{"s", print_string},
			{"d", print_int},
			{"i", print_int},
			{"%", print_modulus},
			{NULL, NULL}
		};

	while (type_finder[idx].specifier)
	{
		if (type_finder[idx].specifier[0] == (*format))
			return (type_finder[idx].f);
		idx++;
	}
	return (NULL);
}
