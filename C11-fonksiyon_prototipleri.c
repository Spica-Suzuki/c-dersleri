#include <stdio.h>

void hello (char[], int); //fonksiyon prototipi

//fonksiyon prototipleri int minden sonra yazılan fonksiyonları çağırmak 
//için daha önce yazılır.
//koyulacak argümanalra dikkat et name ve age olmalı name olsa olmaz
// avantajları= headerlarda kullanılır, debug yapmayı kolaylaştırır int başta olur 
int main () {

char name [] = "Supi";
int age = 18;
hello(name, age);

    return 0;
}

void hello(char x[], int y)
{
printf("\nHappy birthday %s\n", x);
printf("\nYou are %d years old\n", y);
}
