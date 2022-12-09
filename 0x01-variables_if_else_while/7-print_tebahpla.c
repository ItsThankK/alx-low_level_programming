#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the alphabets a to z in lowercase 
 *
 * Return: Always 0.
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
