#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * hex - convert a number to an octal
 * @n: a number
 * Return: a number in octal
 */
char *heX(unsigned int n)
{
	int i;
	char s[16] = "0123456789ABCDEF";
	char *ns;

	i = 0;
	ns = malloc(sizeof(char) * 100);
	while (n != 0)
	{
		ns[i++] = (s[n % 16]);
		n = n / 16;
	}
	reverse_array(ns, i);
	ns[i] = '\0';
	return (ns);
}

/**
 * make_hex - make an octal string
 * @s: a format string
 * @l: a va_list
 * Return: a pointer to the result
 */
char *make_heX(char *s, va_list l)
{
	unsigned int n;
	char *result;
	(void) s;
	n = va_arg(l, unsigned int);
	result = heX(n);
	return(result);
}
