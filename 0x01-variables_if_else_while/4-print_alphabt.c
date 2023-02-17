#include <stdio.h>

/**
 * main - a program that print all lowercase alphabets except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_case;

	lower_case = 'a';
	while
		(lower_case <= 'z')
		{
			if ((lower_case != 'q' && lower_case != 'e') && lower_case <= 'z')
				putchar(lower_case);
			lower_case++;
		}
	putchar('\n');
	return (0);
}
