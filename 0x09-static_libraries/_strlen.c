#include "main.h"

int _strlen(char *s)
{
    int lenght = 0;
    
    while (s[lenght] != '\0')
    {
        lenght++;    
    }
    return (lenght);
}