#include <stdio.h>


int ft_find_max (int a , int b , int c )    //Checking max numbers
{
    int max;
    if (a > b && a > c){
        max = a;
    }else if (b > a && b>c){
        max = b;
    }else if (c > a && c > b){
        max = c;
    }
    return (max);
}

void ft_display_results (int max, char *check)    //resoulte
{
    printf("\n----------------------------------------------\n");
    printf("| The max number is : %d and it : %s", max , check);
    printf("\n----------------------------------------------\n");
}

char *ft_is_even (int or)    //checking nambers
{
    int calcul;
    char *check;
    calcul = or % 2;
    if (calcul == 0){
        check = "even";
    }else if (calcul == 1){
        check = "Odd";
    }
    return (check);
}

int ft_print_scan (void)    //print and scan
{
    int num;
    printf("●Entr namber >> ");
    scanf("%d",&num);
    return (num);
}

int main (void)
{
    int a , b , c ;
    int max;
    char *check;
    a = ft_print_scan();
    b = ft_print_scan();
    c = ft_print_scan();
    max = ft_find_max(a , b , c);
    check = ft_is_even(max);
    ft_display_results(max, check);
}





