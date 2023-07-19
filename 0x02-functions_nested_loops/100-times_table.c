#include "main.h"
/**
 * print_times_table - function that prints all natural numbers from n to 98,
 * @n: start of the count
 * Return: 0 sucess
 */
void print_times_table(int n)
{
	int i=0;
    int j;
    
    while (i <= n)
    {
        j = 0;
        
        while (j <= n){
            int k = i * j;
            
            if (j == 0)
            {
                printf("%d", k);
            }
            if (k <= 9 && j != 0)
            {
                printf(",    %d", k);
            }
            if (k >= 10 && k <= 99)
            {
                printf(",   %d", k);
            }
            if (k > 99 && k <= 999)
            {
                printf(",  %d", k);
            }
            else if (k >= 1000)
            {
                printf(", %d", k);
            }
            j++;
        }
        putchar('\n');
        i++;
    }
}
