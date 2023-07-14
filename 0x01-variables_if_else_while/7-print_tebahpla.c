#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print reverse alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 25;
char str[] = "abcdefghijklmnopqrstuvwxyz";

while (i >= 0)
{
	putchar(str[i]);
	i--;
}
putchar('\n');
return (0);
}
