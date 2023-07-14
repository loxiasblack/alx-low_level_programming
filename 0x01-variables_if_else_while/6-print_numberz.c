#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print all single digit base on 10 but only withchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

while (i < 10)
{
	putchar('0' + i);
	i++;
}
putchar('\n');
return (0);
}
