#include <stdio.h>
#include <stdlib.h>
/**
* main - prints hexadecimal digits in lowercase
*
* Return: zero
*/
int main(void)
{
	int digit;
	int letter;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
