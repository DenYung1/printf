#include "main.h"

/**
 * get_fans - Calculates active fans
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Fans:
 */
int get_fans(const char *format, int *i)
{
/* - + 0 # ' ' */
/* 1 2 4 8  16 */
int j, curr_i;
int fans = 0;
const char FANS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
const int FANS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
{
for (j = 0; FANS_CH[j] != '\0'; j++)
if (format[curr_i] == FANS_CH[j])
{
fans |= FANS_ARR[j];
break;
}

if (FANS_CH[j] == 0)
break;
}

*i = curr_i - 1;

return (fans);
}

