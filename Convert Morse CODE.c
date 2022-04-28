#include <stdio.h>
#include <stdlib.h>

int main()
{
   char key;           //created by zakaria omoro
   int word[100],i=0,j=0;
   printf("PLEASE TYPE ANYTHING:\t");
   while(1)
   {
       key=getch();
       if((key>=48 && key<=57) || (key>=97 && key<=122) || (key>=65 && key<=90) || key==8 || key==32 || key==13)
       {
           if(key==8)
           {
               printf("\b \b");
           }
           if(key==32)
           {
               printf(" ");
           }
           if(key==13)
           {
               break;
           }
           if(key==65 || key==97)
           {
               printf(".-");
           }
           if(key==66 || key==98)
           {
               printf("-...");
           }
           if(key==67 || key==99)
           {
               printf("-.-.");
           }
           if(key==68 || key==100)
           {
               printf("-..");
           }
           if(key==69 || key==101)
           {
               printf(".");
           }
           if(key==70 || key==102)
           {
               printf("..-.");
           }
           if(key==71 || key==103)
           {
               printf("--.");
           }
           if(key==72 || key==104)
           {
               printf("....");
           }
           if(key==73 || key==105)
           {
               printf("..");
           }
           if(key==74 || key==106)
           {
               printf(".---");
           }
           if(key==75 || key==107)
           {
               printf("-.-");
           }
           if(key==76 || key==108)
           {
               printf(".-..");
           }
           if(key==77 || key==109)
           {
               printf("--");
           }
           if(key==78 || key==110)
           {
               printf("-.");
           }
           if(key==79 || key==111)
           {
               printf("---");
           }
           if(key==80 || key==112)
           {
               printf(".--.");
           }
           if(key==81 || key==113)
           {
               printf("--.-");
           }
           if(key==82 || key==114)
           {
               printf(".-.");
           }
           if(key==83 || key==115)
           {
               printf("...");
           }
           if(key==84 || key==116)
           {
               printf("-");
           }
           if(key==85 || key==117)
           {
               printf("..-");
           }
           if(key==86 || key==118)
           {
               printf("...-");
           }
           if(key==87 || key==119)
           {
               printf(".--");
           }
           if(key==88 || key==120)
           {
               printf("-..-");
           }
           if(key==89 || key==121)
           {
               printf("-.--");
           }
           if(key==90 || key==122)
           {
               printf("--..");
           }
           if(key==48)
           {
             printf("-----");
           }
           if(key==49)
           {
             printf(".----");
           }
           if(key==50)
           {
             printf("..---");
           }
           if(key==51)
           {
             printf("...--");
           }
           if(key==52)
           {
             printf("....-");
           }
           if(key==53)
           {
             printf(".....");
           }
           if(key==54)
           {
             printf("-....");
           }
           if(key==55)
           {
             printf("--...");
           }
           if(key==56)
           {
             printf("---..");
           }
           if(key==57)
           {
             printf("----.");
           }
       }
       if(key!=8 && key!=13)
       {
       word[i]=key;
       i++;
       }
       else
       {
           continue;
       }
   }
  printf("\n");
   while(j<i)
   {
       key=word[j];
       printf("%c",key);
       j++;
   }

    return 0;
}
