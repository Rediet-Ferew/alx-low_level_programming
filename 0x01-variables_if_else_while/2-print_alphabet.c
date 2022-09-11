#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lower case of letter
 * 
 * Return: zero
 */
int main(void)
{
    char ch = 'a';

    for(ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return(0);

}