#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @str: the string
 * Return: int
 */
int _strlen(const char *str)
{
	int len = 0, idx;
	
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		len++;
	}
	return (len - 1);
}
