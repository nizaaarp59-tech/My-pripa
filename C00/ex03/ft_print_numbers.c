#include <unistd.h>

void ft_print_numbers(void)
{
    char variable;

    variable = '0';
    while (variable <= '9')
    {
        write(1, &variable, 1);
        variable++;
    }
}


