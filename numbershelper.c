#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/*functions to convert a number in decimal to a different base
 *necessitates use of malloc to reverse the string the result are stored in
 */

/**
 * _nlen - size of a number
 * @n: a number
 * Return: the number of digits in this number
 */
int _nlen(unsigned int n)
{
	int i;

	i = 0;

	do {
		++i;
		n /= 10;
	} while (n > 0);
	return (i);
}

/**
 * reverse_array - reverse an array of characters
 * @a: array;
 * @n: number of elements in array
 */

void reverse_array(char *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}

/**
 * base_conv - converts a positive integer in decimal to another base
 * @n: positive number or 0
 * @base: base to convert number to
 * @choice: the ascii characters needed
 * Return: a string containing the values
 */
char *base_conv(unsigned int n, int base, char *choice)
{
	int l, i, init_l;
	char *result;

	l = _nlen(n);
	init_l = 0;
	if (base >= 10)
		init_l = l + 1;
	else if (base >= 8)
		init_l = (l + 1) + 1;
	else
		init_l = 8 * sizeof(unsigned int) + 1;

	result = malloc(init_l * sizeof(char));

	i = 0;
	do {
		result[i++] = choice[n % base];
		n = n / base;
	} while (n > 0);
	reverse_array(result, i);
	result[i] = '\0';
	return (result);
}
