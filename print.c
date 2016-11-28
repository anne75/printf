#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>



/**
 * _printf - trying to make printf
 * @format: format of string
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	int i, l_conv;
	char *conv;
	va_list alist;
	buf_type buf;

	if (format == NULL)
		return (-1);
	_flush(buf.buffer);
	buf.count_c = 0;
	buf.buf_index = 0;
	va_start(alist, format);
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			fill_buffer(&buf, format + i, 1);
			i += 1;
		}
		if (format[i] == '%')
		{
			conv = grab_format(format + i);
/*grab_format grabs anything, hence is not null,
 *check if end char is legit or not
 */
			l_conv = _strlen(conv);
			if (no_conversion(conv[l_conv - 1]))
			{
				make_no_conversion(conv, &buf);
			}
			else
			{
				get_mstring_func(conv[l_conv - 1])(conv, alist, &buf);
				free(conv);
			}
				i += l_conv;
		}
	}
	print_buffer(buf.buffer, buf.buf_index);
	va_end(alist);
	return (buf.count_c);
}