#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - check the code
* @argc: argc
* @argv: argv
* Return: Always 0.
*/
int main(int argc, char **argv)
{
int f1, f2, r, w;

char buff[1024];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
f2 = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
if (f2 == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(f1);
exit(99);
}
while ((r = read(f1, buff, 1024)) > 0)
{
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(f1);
close(f2);
exit(98);
}
w = write(f2, buff, r);
if (w == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(f1);
close(f2);
exit(99);
}
}
if (close(f1) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", f1);
exit(100);
}
if (close(f2) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", f2);
exit(100);
}
return (0);
}
