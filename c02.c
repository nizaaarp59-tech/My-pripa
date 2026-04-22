#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[10]="Nizar";
    char name2[10]="Adam";
    char CheckName[10];
    char tache[10]="Hasan";       //Professor's name
    char CheckHasan[10];
    char pass[20]="123456";        //Professor's password
    char CheckPass[20];
    char material[10];    //Name of the material
    float test1;
    float test2;        //test not
    float test3;
    float testT;
    float resoult;      //resoult 2 test
    char *bultane;

    printf("\n------------------------\n");
    printf("|        massar        |");
    printf("\n------------------------\n");

    printf("\n        Login... \n");
    do {
        printf("\n●Entre Professor's name >> ");
        scanf("%s",CheckHasan);
    }while (strcmp(CheckHasan,tache) !=0);
    do {
        printf("\n●Entre Professor's password >> ");
        scanf("%s",CheckPass);
    }while (strcmp(CheckPass,pass) !=0);;
    printf("\n-----------------------------------\n");
    printf("|        wellcom Hasan      ");
    printf("\n-----------------------------------\n");
    printf("\n●Entre your Name of the material >> ");
    scanf("%s",material);

    do {
        printf("●Entr student name >> ");
        scanf("%s",CheckName);
    }while (strcmp(CheckName,name1) !=0 && strcmp(CheckName,name2) !=0 );

    printf("\n------------------------\n");
    printf("|◇the material is %s \n",material);
    printf("|◇the student is %s  ",CheckName);
    printf("\n------------------------\n");

    do {
        printf("\n●Entr note of test1 >> ");
        scanf("%f",&test1);
    }while (test1<0 || test1>20);
    do {
        printf("\n●Entr note of test2 >> ");
        scanf("%f",&test2);
    }while (test2<0 || test2>20);
    do {
        printf("\n●Entr note of test3 >> ");
        scanf("%f",&test3);
    }while (test3<0 || test3>20);

    testT = test1+test2+test3;
    resoult = testT/3;

    if (resoult==20)
    {
        bultane="♡ You are the number one student in the country ";
    }else if (resoult>=15 && resoult!=20){
        bultane="♡ You are a diligent and persevering student ";
    }else if (resoult>=10 && resoult!=15){
        bultane="♡ I succeeded, put in more effort ";
    }else if (resoult<=9){
        bultane="♤ Unfortunately, it didn't work. Try harder next year.";
    }

    printf("\n------------------------\n");
    printf("|        resoult           ");
    printf("\n------------------------\n");
    printf("\n------------------------\n");
    printf("|>> ◇ prof : Hasan\n");
    printf("|>> ◇ student : %s\n",CheckName);
    printf("|>> ◇ material : %s\n",material);
    printf("|>> ◇ test1 : %.2f\n",test1);
    printf("|>> ◇ test2 : %.2f\n",test2);
    printf("|>> ◇ test3 : %.2f\n",test3);
    printf("|>> ◇ resoult : %.2f\n",resoult);
    printf("|>> ◇ bultane : %s\n",bultane);
    printf("\n------------------------\n");







}
