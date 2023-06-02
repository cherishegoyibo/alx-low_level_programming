#include <stdio.h>

/**
 * pre_main - runs before main function
 *
 * Return: no return
 */
void pre_main(void)__attribute__ ((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
