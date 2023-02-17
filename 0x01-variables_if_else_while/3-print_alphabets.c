#include <stdio.h>

/**
 * main - the program that print the lowercase and the uppercase together
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_case;
	char upper_case;

	lower_case = 'a';
	upper_case = 'A';
	while
		(lower_case <= 'z')
		{
			putchar(lower_case);
			lower_case++;
		}
	while
		(upper_case <= 'Z')
		{
			putchar(upper_case);
			upper_case++;
		}
	putchar('\n');
	return (0);
}
