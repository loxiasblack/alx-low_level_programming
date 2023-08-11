#include "main.h"
/**
 * reverse_array - a function that reverse array
 * @a: array
 * @n: lenght of the array
 * Return - nothing
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (i <= n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = tmp;
		i++;
		n--;
	}
}
