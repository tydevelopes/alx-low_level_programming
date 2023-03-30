#include <stdio.h>

void perform_checks(void) __attribute__ ((constructor));

/**
 * perform_checks - run before main function
 */
void perform_checks(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
