#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: Alwys 0 (Success)
 */
void print_alphabet(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
