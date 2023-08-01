#include "main.h"
/**
 * print_chessboard - function
 * @a: the array
 * Retrun: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (a[i] != a[8])
	{
		j = 0;

		while (a[j] != a[8])
		{
			printf("%c", a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
