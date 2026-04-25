# include <unistd.h>

void ft_print_comb2(void)
{
    int a,b;
    a = 0;
    char ta,ua,tb,ub;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ta = (a / 10) + '0';
            ua = (a % 10) + '0';
            tb = (b / 10) + '0';
            ub = (b % 10) + '0';
            write(1,&ta,1);
            write(1,&ua,1);
            write(1," ",1);
            write(1,&tb,1);
            write(1,&ub,1);
            if (!(a == 98 && b == 99))
            {
                write(1,", ",1);
            }
            b++;
        }
        a++;
    }
}
