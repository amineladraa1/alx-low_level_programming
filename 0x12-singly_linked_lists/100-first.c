#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * pre_main - Entry point
 * function is executed
 */

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

