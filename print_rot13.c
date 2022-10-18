#include "main.h"

/**
 * print_rot13 - encodes a string using rot13 encryption
 * @s: string to be encoded
 *
 * Return: number of chars printed
 */

int print_rot13(char *s)
{
	char nor[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count, len, count2 = 0, chars_printed = 0;
	char now, *rot13d;

	len = 0;
	while (*(s + len))
		len++;
	rot13d = malloc(sizeof(char) * len);
	if (rot13d == NULL)
	{
		free(rot13d);
		return (0);
	}
	len = 0;
	while (*(s + len))
	{
		now = *(s + len);
		for (count = 0; count < 53; count++)
		{
			if (now == nor[count])
			{
				*(rot13d + len) = rot[count];
				count2 = count;
				break;
			}
		}
		if (*(rot13d + len) != rot[count2])
			*(rot13d + len) = now;
		if (*(rot13d + len) == '\\')
		{
			*(rot13d + len + 1) = *(s + len + 1);
			len++;
		}
		len++;
	}
	*(rot13d + len) = '\0';
	chars_printed = print_string(rot13d);
	free(rot13d);
	return (chars_printed);
}