#include <stdio.h>

/**
 * main - program that print the hexadecimal numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letters;
	int numbers;

	letters = 'a';
	numbers = 0;
	while
		(numbers < 10) {
			 putchar(numbers + '0');
			 numbers++;
		}
	while
		(letters <= 'f') {
			 putchar(letters);
			 letters++;
		}
	putchar('\n');
	return (0);
}
