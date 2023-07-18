#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "_putchar";
    int i;

    i = 0;
    while (i <8 )
    {
        putchar(string[i]);
        i++;
    }
    putchar('\n');
    return (0);
}