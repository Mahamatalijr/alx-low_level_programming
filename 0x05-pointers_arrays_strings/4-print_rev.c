#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - Prints a string in reverse orde
 *@s: String to reverse
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
