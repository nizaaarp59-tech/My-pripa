#include <stdio.h>
int main(void)
{

   int a;
   int b;
   char c='k';
   int r;
   printf("\n-------------------------------\n");
   printf("|        calculatris          |");
   printf("\n-------------------------------\n");
   printf("Entre nambers >> ");
   scanf("%d", &a);

   do {
       printf("Entre + - / * >> ");
       scanf(" %c", &c);
   }while(c!='+' && c!='/' && c!='*' && c!='-');

   printf("Entre nambers >> ");
   scanf("%d", &b);
   // if
   if (c=='+')
      {
       r=a+b;
       printf("---------------");
       printf("\n>> %d \n",r);
       printf("---------------\n");
      } else if (c=='-')
          {
               r=a-b;
               printf("---------------");
               printf("\n>> %d \n",r);
               printf("---------------\n");
      } else if (c=='*')
          {
               r=a*b;
               printf("---------------");
               printf("\n>> %d \n",r);
               printf("---------------\n");
      } else if (c=='/')
          {
               r=a/b;
               printf("---------------");
               printf("\n>> %d \n",r);
               printf("---------------\n");
      }








}

