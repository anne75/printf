#include "holberton.h"


/**
 * conversion_percent - check if format is right
 * @s: formatting string for %
 * Return: 1 if it is 0 otherwise
 */
int conversion_percent(char *s)
{
	(void) s;

	return (1);
}


/**
 * make_percent - creates string with % end tag
 * @s: format
 * @vl: argument
 * @buf: pointer to buf_type
 * Return: formatted string
 */
void make_percent(char *s, va_list vl, buf_type *buf)
{
	(void) vl;
	(void) s;
	/*as it is the format grabs the introductory %*/

	fill_char_buffer(buf, '%');
}
