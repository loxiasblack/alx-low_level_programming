#include "main.h"

int recup(int p, int n);
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n == 1)
    {
        return (1);
    }
    if (n > 2)
    {
        return (recup(0, n));
    }
    else
        return (0);
        
}

int recup(int p, int n)
{
    if (p * p > n)
    {
        return (-1);
    }
    if (p * p == n)
    {
        return (p);
    }
    if (p * p < n)
    {
        return (recup(p+1, n));
    }
    else
        return 0;
    
}