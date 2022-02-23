/* Üçlü OPERATÖR , 3 işleç üzerinde çalışan koşullu bir işleçtir.
//koşullu operatör oalrakd a bilinir.
Koşullu Operatör Sözdizimi (Conditional Operator Syntax)*/

// Koşullu ifade ? ifade1 : ifade2

//if else'nin kısaltmasıdır
/*

Koşullu operatör aşağıdaki gibi çalışır:

-İlk ifade : koşullu İfade ilk önce değerlendirilir. Bu ifade, doğru olup olmadığını
 1 olarak ve yanlış ise 0 olarak değerlendirir.
-Koşullu İfade doğruysa, ifade1 değerlendirilir.
-Koşullu İfade yanlışsa, ifade2 değerlendirilir.
*/
//Koşullu operatör Örneği : 

#include <stdio.h>
int main(){
   char Subat;
   int gunler;
   printf("Bu yıl artık yıl ise, 1 girin.: ");
   scanf("%c",&Subat);

   // If test condition (Subat== 'l') doğru ise, günler 29'a eşit.
   // If test condition (Subat=='l') yanlış ise, 28 güne eşit.
   gunler = (Subat == '1') ? 29 : 28;

   printf("Subat ayı gün sayısı= %d \n ",gunler);
   return 0;
}