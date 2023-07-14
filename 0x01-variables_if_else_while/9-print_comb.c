#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all digit number with commas'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

while (i <= 9)
{
	putchar('0' + i);
	if (i < 9)
		putchar(',');
	if (i < 9)
		putchar(' ');
	i++;
}
putchar('\n');
return (0);
}
