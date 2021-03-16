#ifndef HOLBERTON_H
#define HOLBERTON_H
/*LIBRARIES*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*STRUCT*/
/**
 * find_sp - checks for format type
 * @def: format definer
 * @f: desired function
 */
typedef struct find_sp
{
	char *specifier;
	int (*f)(va_list);
} find_sp_t;


/*PROTOTYPES*/
int _putchar(char c);
int print_int2(int n);
int (*find_type(const char *format))(va_list);
int _printf(const char *format, ...);
int print_single_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_modulus(va_list __attribute__((unused)) list);
#endif /* HOLBERTON_H */
