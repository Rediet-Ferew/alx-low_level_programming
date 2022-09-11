#include <stdio.h>
#include <stdlib.h>
/**
* main - printing letters except q and e
*
* Return: zero
*/
int main(void)
{
	char letter = 'a';
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
		