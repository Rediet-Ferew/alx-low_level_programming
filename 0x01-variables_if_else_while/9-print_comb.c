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

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
