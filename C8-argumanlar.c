#include <stdio.h>

void birthday(char x[], int y)
{
printf("\nHappy birthday %s\n", x);
printf("\nYou are %d years old\n", y);

}

//fonksiyonlar diğer fonksiyonların içini göremezler
//bu nedenle parantezlerin içine yazıyoruz. 
// Parantezler telefon gibidir.
//iki fonksiyonun içine ortak ad yazmaya gerek yok ama ortak değer yazılmalıdır

int main () {
char name [] = "Supi";
int age = 18;
birthday(name, age);

    return 0;
}