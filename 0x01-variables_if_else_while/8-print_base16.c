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

while (i < 10)
{
	putchar('0' + i);
	i++;
}
while (j < 6)
{
	putchar(str[j]);
	j++;
}
putchar('\n');
return (0);
}
