#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'print without  printf or puts  functions'
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = sizeof(str) - 1;

	write(STDOUT_FILENO, str, length);
	return (1);
}
