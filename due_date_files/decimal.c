#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
 * conversion_di - checks validity of d and i
 * @s: format string ot check
 * Return: 1 if checks and 0 and exits otherwise
 */
int conversion_di(char *s)
{
	(void) s;
	return (1);
}

/**
 * _itoa - transforms a number into a string, fills buffer
 * @n: an int
 * @buf: a pointer to the buf structure
 */
void _itoa(int n, buf_type *buf)
{
	char *number;

	if (n < 0)
		fill_char_buffer(buf, '-');
	if (n >= 0)
		n = -n;

	number = base_conv((unsigned int) -1 * n, 10, "0123456789");
	fill_buffer(buf, number, _strlen(number));
	free(number);
}

/**
 * make_decimal - creates formatted output
 * @s: format string
 * @vl: arguement to format
 * @buf: a pointer to the buf structure
 * Return: formatted string;
 */

void make_decimal(char *s, va_list vl, buf_type *buf)
{
	int n;
	(void) s;

	n = va_arg(vl, int);
	_itoa(n, buf);
}
