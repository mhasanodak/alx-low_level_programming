#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry Point
 *
 *
 * Return: 0 Always (Success)
 */


int main(void)

{
	int n;
	int digit;
	/** End Decleration **/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	printf("Last digit of %d is %d ", n, digit);
	if (digit < 6 && digit != 0)
	{
		printf("and is less than 6 and not 0");
	} else if (digit > 5)
	{
		printf("and is greater than 5");
	}
	return (0);
}
