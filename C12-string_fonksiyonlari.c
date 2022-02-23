#include <stdio.h>
#include <string.h>


int main(){

  

   char string1[] = "Spica";

   char string2[] = "Suzuki";

 

   //strlwr(string1);                              // bir dizeyi küçük harflere dönüştürür

   //strupr(string1);                           // bir dizeyi büyük harflere dönüştürür

   //strcat(string1, string2);             // dize 2'yi dize 1'in sonuna ekler

   //strncat(string1, string2, 1);       // dize 2'den dize 1'e n sayıda karakter ekler

   //strcpy(string1, string2);             // dize 2'yi dize 1'e kopyalar

   //strncpy(string1, string2, 2);      // dize 2'nin n karakterini dize 1'e kopyalar

   

   //strset(string1, '?');        //bir dizenin tüm karakterlerini belirli bir karaktere ayarlar

   //strnset(string1, 'x', 1);  //bir dizenin ilk n karakterini belirli bir karaktere ayarlar

   //strrev(string1);             //bir dizeyi ters çevirir



   //int result = strlen(string1);                    // dize uzunluğunu int olrka geri döndürür

   //int result = strcmp(string1, string2);         // iki dize arasındaki karakaterler aynı mı diye bakar

   //int result = strncmp(string1, string2, 1);   // iki dize arasındaki n sayıdaki karakterler aynı diye mi bakar

   //int result = strcmpi(string1, string1);        // yukardakinin büyük küçük duyarsızı

   //int result = strnicmp(string1, string1, 1); // yukardakinin büyük küçük duyarsızı ama n



   printf("%s", string1);



   /*

   if(result == 0)

   {

      printf("These strings are the same");

   }

   else

   {

      printf("These strings are not the same");

   }

   */



   return 0;

}