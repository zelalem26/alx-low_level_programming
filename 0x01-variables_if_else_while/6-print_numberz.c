#include <stdio.h>

/**
 * main - a program that print base 10 numbers with putchar function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;


	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
