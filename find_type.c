#include "holberton.h"

/* Specifiers */


%% - percent sign (/%)
%c - char
%d, %i - signed int
%e, %E - long int /* scientific notation */
%f - float
%g, %G - short /* uses shorter of %e or %f; %E or %f */
%o - signed int /* octal */
%s - char * /* string */
%u - unsigned int
%x, %X - unsigned int /* hexadecimal */
%p - * /* pointer address  & is address-of mod */
%n - /* nothing void? */

/* Width - %5d space fill %05d 0 fill)
 * Precision - floats, %.6 (default)
 * Signage - %
 * Justifaction - right-justified default; - left align, + right align
 * Fill - space
 * */

struct type_finder {
	{"c", print_single_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"%", print_modulus},
};
