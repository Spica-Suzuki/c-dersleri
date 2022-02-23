/*
Virgül operatörleri, ilgili ifadeleri birbirine bağlamak için kullanılır. Örneğin:

int a, c = 5, d;

*/

//Sizeof, veri boyutunu döndüren tek bir operatördür
// (sabit, değişkenler, dizi, yapı vb.). Örneğin : 

#include <stdio.h>
int main()
{
    int a, e[10];
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));
    printf("10 öğeye sahip tam sayı tür dizisinin boyutu = %lu bytes\n", sizeof(e));
    return 0;
}

//sizeof %lu ile ifade edilir 








