#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
char *str1 = "You're beat! and yet, you must allow,\n";

char *str2 = "I bore my house upon my back!\n";

printf("%s", str1);
printf("%s", str2);
}

