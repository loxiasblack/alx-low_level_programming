#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0 sucess
 */
int main(void)
{
	int n = 50;
	unsigned long f[n];

	f[0] = 1;
	f[1] = 2;

	for (int i = 2; i < n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int i = 0; i < n - 1; i++)
	{
		printf("%lu, ", f[i]);
	}
	printf("%lu\n", f[n - 1]);
	return (0);
}
