#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * conversion_b - checks validity of binaries
 * @s: format string ot check
 * Return: 1 if checks and 0 and exits otherwise
 */
int conversion_b(char *s)
{
	(void) s;
	return (1);
}



/**
 * make_binary - make an octal string
 * @s: a format string
 * @l: a va_list
 * @buf: a pointer to a buf_type
 * Return: a pointer to the result
 */
void make_binary(char *s, va_list l, buf_type *buf)
{
	unsigned int n;
	char *result;
	(void) s;

	n = va_arg(l, unsigned int);
	result = base_conv(n, 2, "01");
	fill_buffer(buf, result, _strlen(result));
	free(result);
}
