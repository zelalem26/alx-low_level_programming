#include <stdio.h>

/**
 * main - a program that print the lowercase characters
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	return (0);
}
