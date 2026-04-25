#include <unistd.h>

void ft_print_comb(void)
{
    char b;
    char c;
    char a;
    a = '0';
    while (a <= '7')   // a 1
    {
        b = a + 1;     // b 1
        while (b <= '8')
        {
            c = b+1;    // c 3
            while (c <= '9')
            {
                write(1,&a,1);
                write(1,&b,1);
                write(1,&c,1);
	        if (!(c == '9' && a == '7' && b == '8')){
                    write(1,", ",1);
                }
                c++;
            }
            b++;
         }
         a++;
    }
}
