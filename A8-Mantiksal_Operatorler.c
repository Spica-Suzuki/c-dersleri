/*&&	Mantıksal VE (AND). Yalnızca tüm operandlar doğruysa doğru (true).
	Eğer c = 5 ve d = 2 ise, ifade ((c == 5) && (d > 5)) 0’a eşittir.
||	Mantıksal VEYA (OR).Yalnızca bir işlenen doğruysa doğru (true)
	Eğer c = 5 ve d = 2 ise, ifade ((c == 5) || (d > 5)) 1’e eşittir.
!	Mantıksal DEĞİL(NOT). İşlenen 0 ise doğru (true).
	Eğer c = 5 ise, ifade! (c == 5), 0’a eşittir.*/

    #include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) equals to %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) equals to %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) equals to %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) equals to %d \n", result);

    result = !(a != b);
    printf("!(a == b) equals to %d \n", result);

    result = !(a == b);
    printf("!(a == b) equals to %d \n", result);

    return 0;
}

/* Mantıksal operatör programının açıklaması

(a == b) && (c> 5) 1 olarak değerlendirir, çünkü her iki işlenen (a == b) ve (c> b) 1’dir (doğru).
(a == b) && (c <b) 0 olarak değerlendirir, çünkü işlenen (c <b) 0 (yanlış) olur.
(a == b) || (c <b) 1 olarak değerlendirir, çünkü (a = b) 1 (doğru).
(a! = b) || (c <b) 0 olarak değerlendirir, çünkü hem operand (a! = b) ve (c <b) 0’dır (yanlış).
! (a! = b), 1 olarak değerlendirilir, çünkü operand (a! = b), 0 (yanlış) olur. Dolayısıyla,! (A! = B) 1 (gerçek) olur.
! (a == b) 0 olarak değerlendirir, çünkü (a == b) 1 (doğru). Dolayısıyla,! (A == b), 0 (yanlış) olur.
*/