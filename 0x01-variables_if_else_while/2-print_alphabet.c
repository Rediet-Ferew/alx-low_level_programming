#include <stdio.h>
#include <stdlib.h>
/**
* main - printing lowercase letters
*
* Return: zero
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
