#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print all single digit base on 10 but only withchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned char str[] = "0123456789";
int i = 0;

for (i = 0 ; i < 11 ; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}
