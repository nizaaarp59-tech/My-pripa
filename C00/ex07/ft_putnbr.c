#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nb)
{
    unsigned int n;
    if (nb < 0)
    {
        write(1,"-",1);
        n =(unsigned int)(-nb);            //nb = -1 -nb = -(-1) >> 1
    }                       //147
    else
    {
        n =(unsigned int)(nb);
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);   //14 >> 1
    }
    ft_putchar(n % 10 + '0');
}

int main(void)
{
   int a;
   scanf("%d",&a);
   ft_putnbr(a);
}
