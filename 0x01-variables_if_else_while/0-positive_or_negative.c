#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main function
 * return 0 success
 * prints if n is positive
 * or negative
 * or 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative", n);
	return (0);
}
