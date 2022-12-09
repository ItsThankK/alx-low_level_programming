#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the numbers 1 to 9
 *
 * Return: Always 0.
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d\n" ,num);
		num++;
	}
	return (0);
}
