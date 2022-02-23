//İlişkisel Operatörler, iki işlenen arasındaki ilişkiyi denetler. 
//İlişki doğruysa, 1 (true) döndürür; ilişki yanlış ise, 0 (false) değerini döndürür.
//İlişkisel operatörler karar verme ve döngülerde kullanılır.


/* ==	Eşittir (Equal to)	5 == 3, sonuç 0
>	Büyüktür (Greater than)	5 > 3, sonuç 1
<	Küçüktür (Less than)	5 < 3, sonuç 0
!=	Eşit değil (Not equal to)	5 != 3, sonuç 1
>=	Büyük veya eşittir (Greater than or equal to)	5 >= 3, sonuç 1
<=	Küçük veya eşittir (Less than or equal to)	5 <= 3, sonuç 0
*/


#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d = %d \n", a, b, a == b); // true
    printf("%d == %d = %d \n", a, c, a == c); // false

    printf("%d > %d = %d \n", a, b, a > b); //false
    printf("%d > %d = %d \n", a, c, a > c); //false


    printf("%d < %d = %d \n", a, b, a < b); //false
    printf("%d < %d = %d \n", a, c, a < c); //true


    printf("%d != %d = %d \n", a, b, a != b); //false
    printf("%d != %d = %d \n", a, c, a != c); //true


    printf("%d >= %d = %d \n", a, b, a >= b); //true
    printf("%d >= %d = %d \n", a, c, a >= c); //false


    printf("%d <= %d = %d \n", a, b, a <= b); //true
    printf("%d <= %d = %d \n", a, c, a <= c); //true

    return 0;

}