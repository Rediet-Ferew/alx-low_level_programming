#include <stdio.h>
#include <stdlib.h>
/**
* main - printing lowercase and uppercase letters
*
* Return: zero
*/
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar (lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar (upper);
	}
	putchar('\n');
	return (0);
}
