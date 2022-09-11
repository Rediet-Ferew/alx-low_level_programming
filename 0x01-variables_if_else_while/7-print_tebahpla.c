#include <stdio.h>
#include <stdlib.h>
/**
* main - prints lower case letters in reverse
*
* Return: zero
*/
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar (lower);
	}
	putchar ('\n');
	return (0);
}
