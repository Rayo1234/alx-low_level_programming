#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: always zero
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if(n > 5)
		printf("Last digit of %d is %d and is greater than 5", m, n);
	else if(n == 0)
		printf("Last digit of %d is %d and is 0", m, n);
	else if(n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0",  m,n);
	printf("\n");

	return (0);
}
