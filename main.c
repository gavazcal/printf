#include <stdio.h>
#include <limits.h>
#include "holberton.h"

int main(void)
{
	int len;
	int len2;
	/* Some tests with 1 arg */

	_printf("Regular String--------------------\n");
	_printf("\n\"hello\"----------------\n");
	len = _printf("hello");
	_printf("\n");
	len2 = _printf("hello");
	if(len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n\"%\"--------------------\n");
	len = _printf("%");
	_printf("\n");
	len2 = _printf("%");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n\"\"---------------------\n");
	len = _printf("");
	_printf("\n");
	len2 = _printf("");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n----------------\n");
	_printf("\nPercent Modifier----------------\n");
	len = _printf("\n\"%%%%\"-------------------\n");
	_printf("\n");
	len2 = _printf("\n\"%%%%\"-------------------\n");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("%%");
	len = _printf("\n\"%%%%%%\"------------------\n");
	_printf("\n");
	len2 = _printf("\n\"%%%%%%\"------------------\n");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("%%%");
	len = _printf("\n\"%%%% %%\"-----------------\n");
	_printf("\n");
	len2 = _printf("\n\"%%%% %%\"-----------------\n");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("%% %");
	len = _printf("\n\"%% %%%%\"-----------------\n");
	_printf("\n");
	len2 = _printf("\n\"%% %%%%\"-----------------\n");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("% %%");
	_printf("\n-------");

	_printf("\n----------------\n");
	_printf("\nCharacter Modifier----------------\n");
	_printf("\n(\"%%c\", 'c')----------------\n");
	len = _printf("%c", 'c');
	_printf("\n");
	len2 = _printf("%c", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", NULL)----------------\n");
	len = _printf("%c", NULL);
	_printf("\n");
	len2 = _printf("%c", NULL);
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", '\\0')----------------\n");
	len = _printf("%c", '\0');
	_printf("\n");
	len2 = _printf("%c", '\0');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", '\\n')----------------\n");
	len = _printf("%c", '\n');
	_printf("\n");
	len2 = _printf("%c", '\n');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", '\\t')----------------\n");
	len = _printf("%c", '\t');
	_printf("\n");
	len2 = _printf("%c", '\t');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", \"hello world\")----------------\n");
	len = _printf("%c", "hello world");
	_printf("\n");
	len2 = _printf("%c", "hello world");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", \"ggg\")----------------\n");
	len = _printf("%c", "ggg");
	_printf("\n");
	len2 = _printf("%c", "ggg");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\")----------------\n");
	len = _printf("%c");
	_printf("\n");
	len2 = _printf("%c");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"[%%c]\")----------------\n");
	len = _printf("[%c]");
	_printf("\n");
	len2 = _printf("[%c]");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"[%%%%%%c]\", 'c')----------------\n");
	len = _printf("[%%%c]", 'c');
	_printf("\n");
	len2 = _printf("[%%%c]", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"[%%%%%%c]\", 'c')----------------\n");
	len = _printf("[%%%c]", 'c');
	_printf("\n");
	len2 = _printf("[%%%c]", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c, %%c\", 'c')----------------\n");
	len = _printf("%c, %c", 'c');
	_printf("\n");
	len2 = _printf("%c, %c", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", 'c', 'c')----------------\n");
	len = _printf("%c", 'c', 'c');
	_printf("\n");
	len2 = _printf("%c", 'c', 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%c\", 48)----------------\n");
	len = _printf("%c", 48);
	_printf("\n");
	len2 = _printf("%c", 48);
	if (len != len2) {
		_printf("\nLengths on't match");
	}
	_printf("\n---------------------\n");



	_printf("\nString Modifier----------------\n");
	_printf("\n---------------------\n");
	_printf("\n(\"%%s\", \"String was here\")----------------\n");
	len = _printf("%s", "String was here");
	_printf("\n");
	len2 = _printf("%s", "String was here");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%s\", NULL)----------------\n");
	len = _printf("%s", NULL);
	_printf("\n");
	len2 = _printf("%s", NULL);
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%s\", \"\")----------------\n");
	len = _printf("%s", "");
	_printf("\n");
	len2 = _printf("%s", "");
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	_printf("\n(\"%%s\", \"string\", NULL)----------------\n");
	len = _printf("%s, %s", "string", NULL);
	_printf("\n");
	len2 = _printf("%s, %s", "string", NULL);
	if (len != len2) {
		_printf("\nLengths don't match");
	}

	/*
	_printf("\n(\"%%s, %%s\", \"string\")----------------\n");
	len = _printf("%s, %s", "string");
	_printf("\n");
	len2 = _printf("%s, %s", "string");
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");
	*/



	_printf("\nInt Modifier----------------\n");
	_printf("\n---------------------\n");

	_printf("\n(\"%%i\", 5)----------------\n");
	len = _printf("%i", 5);
	_printf("\n");
	len2 = _printf("%i", 5);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");

	_printf("\n(\"%%i\", -5)----------------\n");
	len = _printf("%i", -5);
	_printf("\n");
	len2 = _printf("%i", -5);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", 15)----------------\n");
	len = _printf("%i", 15);
	_printf("\n");
	len2 = _printf("%i", 15);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", 'c')----------------\n");
	len = _printf("%i", 'c');
	_printf("\n");
	len2 = _printf("%i", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", NULL)----------------\n");
	len = _printf("%i", NULL);
	_printf("\n");
	len2 = _printf("%i", NULL);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", '\0')----------------\n");
	len = _printf("%i", '\0');
	_printf("\n");
	len2 = _printf("%i", '\0');
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", INT_MAX)----------------\n");
	len = _printf("%i", INT_MAX);
	_printf("\n");
	len2 = _printf("%i", INT_MAX);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", INT_MIN)----------------\n");
	len = _printf("%i", INT_MIN);
	_printf("\n");
	len2 = _printf("%i", INT_MIN);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%i\", 0xa)----------------\n");
	len = _printf("%i", 0xa);
	_printf("\n");
	len2 = _printf("%i", 0xa);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");
	_printf("\nDecimal Modifier----------------\n");
	_printf("\n---------------------\n");


	_printf("\n(\"%%d\", 5.6)----------------\n");
	len = _printf("%d", 5.6);
	_printf("\n");
	len2 = _printf("%d", 5.6);
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");


	_printf("\n(\"%%d\", 'c')----------------\n");
	len = _printf("%d", 'c');
	_printf("\n");
	len2 = _printf("%d", 'c');
	if (len != len2) {
		_printf("\nLengths don't match");
	}
	_printf("\n---------------------\n");



	_printf("\nEND---------------------\n");
	return (0);

}
