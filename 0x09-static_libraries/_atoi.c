#include "main.h"

int _atoi(char *s)
{
    int res;
    int sign = 1;
    int i = 0;

    while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
    {
        if (s[i] == '-')
        {
            sign = -sign;
            i++;
        }
        if (s[i] == '+')
        {
            sign = sign;
            i++;
        }
        if (s[i] = ' ')
        {
            i++;
        }
    }
    for (;s[i] != '\0';i++)
    {
        res = res * 10 + s[i] - '0';
    }
    return (res);
}