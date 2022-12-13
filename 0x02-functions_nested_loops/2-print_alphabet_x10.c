#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * :Return: Always 0
 */
void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 10)
	{
		_putchar(char a[i]);
		i++
		_putchar('\n');
	}
}
