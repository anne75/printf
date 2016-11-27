#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * make_heX - make an octal string
 * @s: a format string
 * @l: a va_list
 * @buf: a pointer to a buf_type structure
 */
void make_heX(char *s, va_list l, buf_type *buf)
{
	unsigned int n;
	char *result;
	(void) s;
	n = va_arg(l, unsigned int);
	result = base_conv(n, 16, "0123456789ABCDEF");
	fill_buffer(buf, result, _strlen(result));
	free(result);
}
