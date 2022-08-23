#include "main.h"
#include <unistd.h>

/**
* main - prints its name, followed by a new line
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(__attribute__((unused))int argc, char *argv[])
{
int i = 0;
char *buf = argv[0], j = '\n';

for (; buf[i]; i++)
{
}

write(1, buf, i);
write(1, &j, 1);

return (0);
}
