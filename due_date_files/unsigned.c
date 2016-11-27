#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * conversion_u - checks validity of u
 * @s: format string ot check
 * Return: 1 if checks and 0 and exits otherwise
 */
int conversion_u(char *s)
{
	(void) s;
	return (1);
}


/**
 * make_unsigned - make an unsigned int
 * @s: a format string
 * @l: a va_list
 * @buf: a pointer to the buf_type structure
 */
void make_unsigned(char *s, va_list l, buf_type *buf)
{
	unsigned int n;
	char *result;
	(void) s;
	n = va_arg(l, unsigned int);
	result = base_conv(n, 10, "0123456789");
	fill_buffer(buf, result, _strlen(result));
	free(result);

}
