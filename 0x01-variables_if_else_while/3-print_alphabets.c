#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print with putchar the alphabet in lower and uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
char STR[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
int j = 0;

for (i = 0; i < 26 ; i++)
{
	putchar(str[i]);
}
for (j = 0; j < 26 ; j++)
{
	putchar(STR[j]);
}
putchar('\n');
return (0);
}
