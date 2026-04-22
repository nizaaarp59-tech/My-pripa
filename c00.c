#include <stdio.h>
int main()
{
    printf("wellcom to 1337 \n");
    printf("Please fill in the data \n");
    int age_d;
    int age_m;
    int age_a;
    char name[20]="";
    char foul_name[20]="";
    char vill[40]="";
    printf("Entre your name >> ");
    scanf("%s", name);
    printf("\nEntre your foul_name  >> ");
    scanf("%s", foul_name);
    printf("\nEntre your vill  >> ");
    scanf("%s", vill);
    printf("\nEntre your date_n >> \n");
    printf(" 1] day >> ");
    scanf("%d",&age_d);
    printf("\n 2] XX >> ");
    scanf("%d",&age_m);
    printf("\n 3] XXXX >> ");
    scanf("%d",&age_a);
    //_______
    int age;
    age=2026-age_a;
    //_______
    //resolt
    printf("\n_____________________________\n");
    printf("| your name is : %s\n", name);
    printf("| your f_name is : %s\n", foul_name);
    printf("| your vill is : %s\n", vill);
    printf("| your age is : %d\n", age);
    printf("\n_____________________________\n");

    printf("\n_____________________________\n");
    printf("| DATE is : %s \n", __DATE__);
    printf("| TIME is : %s \n", __TIME__);
    printf("| FILE is : %s \n", __FILE__);
    printf("\n_____________________________\n");


}
