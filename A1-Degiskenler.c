#include <stdio.h>
int main () {
//variable degisken demektir
//variable= bellekte ayrilmis alan icin alan depolamak icindir
//saklanan degere erismek icin bir degiskenin adina basvururuz
//bu degisken simdi icerdigi degermis gibi davranir
//ancak ne tur veri depoladigimizi bildirmemiz gerekiyor

int x; 			//Duyurma
x = 123; 		//Baslatma
int y = 321;		//Duyurma&Baslatma

int age = 21;       //tamsayi
float gpa = 2.05;    //floating point number
char grade = 'C';       //tek karakter
char name[] = "amk";   //karakterler dizisi

printf("Hello %s \n", name);
printf("You are %d years old \n", age);
printf("Your average grade is %c \n",grade);
printf("Your gpa is %f\n",gpa);

//d = decimal = ondalık = int
//s = string = dizi = char[]
//c = character = karakter =char
//f = float = kesirli = float

/* Char fonksiyonu bir yere yazılacak karakterlerin miktarını belirler örneğin


#include <stdio.h>
int main()
{
    char isim[3];
    printf("Bir isim girin: ");
    scanf("%s", isim);
    printf("Adiniz: %s", isim);
    return 0;
}

kodunda isim olarak en fazla 3 karakterlik bir yazı yazabilirsiniz 4 karakterli ise 
kod hata verip atacaktır. Bunun gibi karakterlede son satır \0 olacaktır bu nedenle
eğer ali yazmak istiyorsak 3 değil 4 yazmamız gerekir a1 l2 i3 \0
*/

// eger char tekse tek tırnak eğer bir kümeyse çift tırnak konulur

return 0;
}
