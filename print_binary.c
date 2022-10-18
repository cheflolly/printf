#include "main.h"

/**
 * print_binary - prints decimal in binary.
 * @num: integer to be converted
 *
 * Return: no of resulting binary characters
 */

int print_binary(unsigned int num)
{
	int chars_printed = 0, j = 0;
	char bnr[sizeof(unsigned int) * 8]; /* 32 bit integer */

	if (num == 0)
	{
		chars_printed += _putchar('0');
		return (chars_printed);
	}

	if (num == 1)
	{
		chars_printed += _putchar('1');
		return (chars_printed);
	}

	while (num > 0)
	{
		bnr[j] = '0' + (num % 2);
		num /= 2;
		j++;
	}
	j--;

	/* printing array in reverse */
	while (j >= 0)
	{
		chars_printed += _putchar(bnr[j]);
		j--;
	}
	return (chars_printed);
}
