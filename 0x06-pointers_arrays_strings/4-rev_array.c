#include "main.h"
/**
 * reverse_array - a function that reverse array
 * @a: array
 * @n: lenght of the array
 * Return - nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temps;

	while (i < n)
	{
		temps = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temps;
		i++;
		n--;
	}
}
