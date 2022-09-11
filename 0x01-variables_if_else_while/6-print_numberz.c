#include <stdio.h>
#include <stdlib.h>
/**
* main - print single digit numbers using putchar
*
* Return: zero
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit < '10'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
