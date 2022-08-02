#include "main.h"
#include <unistd.h>
#include <string.h>

/**
* _puts - prints a string, followed by a new line, to stdout
* @str: pointer of the string
*/

void _puts(char *str)
{
char *buf = str;

write(1, buf, strlen(buf));
_putchar('\n');
}
