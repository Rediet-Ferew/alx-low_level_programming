#include <stdlib.h>
#include <time.h>
/**
 * main - returns the last digit of a number
 * 
 * Return: zero 
 */
int main(void)
{
	int n;
    int last;
    char str[] = "Last digit of";

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last = n%10;

    if (last > 5)
    {
        printf("%s %d is %d and is greater than 5", str, n, last);
    } else if (last < 6 && last != 0){
        printf("%s %d is %d and is less than 6 and not 0", str, n, last);
    } else if(last == 0){
        printf("%s %d is %d and is 0", str, n, last);
    }
	return (0);
}