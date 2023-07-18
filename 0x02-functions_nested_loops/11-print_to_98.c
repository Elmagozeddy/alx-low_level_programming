#include "main.h"

void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            print_number(i);
            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (int i = n; i >= 98; i--)
        {
            print_number(i);
            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}

