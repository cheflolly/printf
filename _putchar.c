#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 *
 * Return: success 1, error -1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
