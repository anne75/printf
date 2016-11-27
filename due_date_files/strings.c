/*string formatters*/
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * make_string - creates formatted string
 * @s: format
 * @vl: argument
 * @buf: pointer to buf_type
 * Return: formatted string
 */
void make_string(char *s, va_list vl, buf_type *buf)
{
	char *result;
	(void) s;

	result = va_arg(vl, char *);
	if (result == NULL)
		result = "(null)";
	fill_buffer(buf, result, _strlen(result));
}

/*for strings*/
/**
 * conversion_string - check if format is right
 * @s: formatting string for strings
 * Return: 1 if it is 0 otherwise
 */
int conversion_string(char *s)
{
	(void) s;
	return (1);
}
