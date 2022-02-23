#include <stdio.h>
//çağırılan fonksiyona bir değer döndürür
// eğer döndürülen karakter ne ise ona göre değer atanır.
//aşğıda double ncak int ise int char ise chaar olması gerekir.
double square(double x)
{
double result = x * x;
return result;
}

//bunu yapmak yerine return x * x de yazılabilir

int main (){

    double x = square(3.4);
    printf("%lf \n",x);
    return 0;
}