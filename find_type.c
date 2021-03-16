#include "holberton.h"

/* Specifiers */


%% - percent sign (/%)
%c - char /* unsigned char */
%d, %i - signed int /* long, int, short, unsigned short */
%e, %E - double, float /* scientific notation */
%f - float
%g, %G - double, float /* uses shorter of %e or %f; %E or %f */
%o - signed int, short, unsigned short, unsigned int, long /* octal */
%s - char * /* string */
%u - unsigned int, unsigned long
%x, %X - unsigned int /* hexadecimal */
%p - void * /* pointer address  & is address-of mod */
%n - /* nothing void? */

/* Width - %5d space fill %05d 0 fill)
 * Precision - floats, %.6 (default)
 * Signage - %
 * Justifaction - right-justified default; - left align, + right align
 * Fill - space
 * */

/* format coming from printf prototype? */

int find_type(char format, va_list ) /* Not sure how to specify to va_list) */
{
	unsigned int idx = 0

	struct type_finder[] = {
	{'c', print_single_char},
	{'s', print_string},
	{'d', print_int},
	{'i', print_int},
	{'%', print_modulus},
	};

/* Missing conditionals to call the functions */
