void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int a;
    int b;
    int c;

    b = 0;
    i = 0;
    c = 1;
    while (c)
    {
        c = 0;
        i = 0;
        while (i != (size -1))
        {
            a = tab[i];
            b = tab[i + 1];
            if (a > b)
            {
                tab[i] = b;
                tab[i + 1] = a;
                c = 1;      
            }
            i++;
        }
    }

}
