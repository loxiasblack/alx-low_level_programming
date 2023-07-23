#include <stdio.h>

int main(void)
{
    unsigned long prev = 0;
    unsigned long current = 1;
    unsigned long next;
    int n = 98;

    while (n--)
    {
        next = current + prev;
        printf("%lu, ", next);
        prev = current;
        current = next;
        if (n == 0)
            printf("\n");
    }
    return 0;
    
}