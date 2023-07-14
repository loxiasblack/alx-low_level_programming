#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print with putchar the alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

for (i = 0; i < 26 ; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}
