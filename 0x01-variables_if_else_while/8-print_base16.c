#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all digit number + some character'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
char str[] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 10; i++)
{
	putchar('0' + i);
}
for (j = 0; j < 6; j++)
{
	putchar(str[j]);
}
putchar('\n');
return (0);
}
