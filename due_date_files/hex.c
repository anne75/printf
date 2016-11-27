#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * conversion_h - checks validity of hex
 * @s: format string ot check
 * Return: 1 if checks and 0 and exits otherwise
 */
int conversion_h(char *s)
{
	(void) s;
	return (1);
}


/**
 * make_hex - make an octal string
 * @s: a format string
 * @l: a va_list
 * @buf: a pointer to the buffer structure
 * Return: a pointer to the result
 */
void make_hex(char *s, va_list l, buf_type *buf)
{
	unsigned int n;
	char *result;
	(void) s;

	n = va_arg(l, unsigned int);
	result = base_conv(n, 16, "0123456789abcdef");
	fill_buffer(buf, result, _strlen(result));
	free(result);
}
