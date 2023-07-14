#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print with putchar the alphabet but escape e and q'
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

for (i = 0; i < 26 ; i++)
{
	if (str[i] != 'e' && str[i] != 'q')
	{
		putchar(str[i]);
	}
}
putchar('\n');
return (0);
}
