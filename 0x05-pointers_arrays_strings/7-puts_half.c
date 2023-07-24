#include "main.h"

/**
 * puts_half - function that printsvhalf of a string,
 * followed by a new line
 * @str: string whose half is to be printed
 */
void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
i = (i / 2);
else
i = 1 + ((i - 1) / 2);
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
