#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1); 
}

void    ft_print_arry (int n, int *arry)
{
    int i;
    i = 0;
    while (i < n)
    {
        ft_putchar (arry[i] + 48);
        i++;
    }
    if (arry[0] != 10 - n)
    {
        ft_putchar (',');
        ft_putchar (' ');
    }
}

void    ft_generateCombos (int n, int start_value, int index, int *arry)
{
    if (index == n)
    {
        ft_print_arry (n, arry);
        return ;
    }
    while (start_value <= 9)
    {
        arry[index] = start_value;
        ft_generateCombos (n, start_value + 1, index + 1, arry);
        start_value++;
    }
}

void    ft_print_combn (int n)
{
    int arry[9];
    if (n > 0 && n < 10)
    {
        ft_generateCombos (n, 0, 0, arry);
    }
}

