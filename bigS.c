#include "holberton.h"
#include <stdlib.h>


/**
 * conversion_S - checks validity of string
 * @s: format string ot check
 * Return: 1 if checks and 0 and exits otherwise
 */
int conversion_S(char *s)
{
	(void) s;
	return (1);
}


/**
 * convert_S - make a string with non printable chars
 * @arg: a string obtained from va_arg
 * @buf: a pointer to the buf structure
 */
void convert_S(char *arg, buf_type *buf)
{
	int i, l;
	char nb[4] = {'\\', 'x', '0', '0'};

	l = _strlen(arg);

	for (i = 0; i < l; ++i)
	{
		if (*(arg + i) >= 32 && *(arg + i) < 127)
		{
			fill_buffer(buf, arg + i, 1);
		}
		else
		{
			_hexa(*(arg + i), nb);
			fill_buffer(buf, nb, 4);
			nb[2] = '0'; /*reset this value for next call*/

		}
	}
}


/**
 * _hexa - transform a decimal to an hexa
 * @n: number in decimal, is < 128 as process ascii
 * @nb: pointer to result
 * I use this function to avoid malloc from the more generic one
 */
void _hexa(char n, char *nb)
{
	int i;
	char *choice = "0123456789ABCDEF";

	i = 3;
	do {
		nb[i] = choice[n % 16];
		n /= 16;
		--i;
	} while (n > 0);
}

/**
 * make_S - make an S string
 * @s: a format string
 * @l: a va_list
 * @buf: a pointer to the buffer structure
 * Return: a pointer to the result
 */
void make_S(char *s, va_list l, buf_type *buf)
{
	char *result;
	(void) s;

	result = va_arg(l, char *);
	convert_S(result, buf);
}

