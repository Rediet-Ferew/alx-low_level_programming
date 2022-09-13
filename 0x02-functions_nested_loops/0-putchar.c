#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* main - prints the string _putchar
*
* Return - zero
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
