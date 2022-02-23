#include <stdio.h>



int main()

{

   // while döngüsü = bir koşulu kontrol eder, 
   //SONRA koşul doğruysa bir kod bloğunu yürütür 

   // do while loop = her zaman bir kod bloğunu bir kez yürütür, 
   //SONRA bir koşulu kontrol eder 


    //while loop önce koşulu kontrol eder
    //do while loop  en son koşulu kontrol eder.

   int number = 0;

   int toplam = 0;

   do{

      printf("Enter a # above 0: ");

      scanf("%d", &number);

      if(number > 0)

      {

         toplam += number;

      }

   }while(number > 0);

   
   printf("sum: %d", toplam);

 
   return 0;

}