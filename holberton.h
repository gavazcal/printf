#ifndef HOLBERTON_H
#define HOLBERTON_H
/*LIBRARIES*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*PROTOTYPES*/
int _putchar(char c);
int _print_int2(int n);

/*PRINTF FUNCTION*/
int _printf(const char *format, ...);

/*PLACEHOLDER FOR FUTURE FUNCTIONS*/

/**
 * find_type - checks for format type
 * @def: format definer
 * @func: desired function
 */
typedef struct find_type
{
	char *def;
	int (*func)(va_list);
} find_type_t;

#endif /* HOLBERTON_H */
