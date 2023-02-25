#include <unistd.h>

/**
 * main - a program that print _putchar
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
