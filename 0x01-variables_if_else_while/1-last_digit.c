#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 'point'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, lnum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lnum = n % 10;
printf("Last digit of %d is %d ", n, lnum);

if (lnum > 5)
	printf("and is greater than 5");
if (lnum == 0)
	printf("and is 0");
if (lnum < 6 && lnum != 0)
	printf("and is less than 6 and not 0");
printf("\n");
return (0);
}
