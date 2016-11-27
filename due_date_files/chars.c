/*all char realted functions*/
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * make_char - make a string from a char
 * @s: string formatting
 * @vl: va_list for argument
 * @buf: a pointer to the buf structure
 * Return: the string
 */
void make_char(char *s, va_list vl, buf_type *buf)
{
	(void) s;
	fill_char_buffer(buf, va_arg(vl, int));
}


/**
 * conversion_char - check if format is right
 * @s: formatting string for chars
 * Return: 1 if it is 0 otherwise, actually exit process
 */
int conversion_char(char *s)
{
	(void) s;
	return (1);
}
