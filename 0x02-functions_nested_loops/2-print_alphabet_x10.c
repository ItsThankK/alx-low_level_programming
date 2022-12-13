#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * :Return: Always 0
 */
void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0, i < 10; i++)
	{
		_putchar(char a[i]);
	}
	_putchar('\n');
}
