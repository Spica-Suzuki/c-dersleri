#include <stdio.h>
int main()
{
    int a = 5, b, c = 5, d = 10, e = 3, g = 2, h, i;
    float f = 25;

    b = a;
    printf("b = %d \n", b);


    //b değeri a değerine eşittir dolayısı ile yazdırılan b değeri a değeridir o da 5tir.


    c += a; // c = c+a
    printf("c = %d \n", c);



    d -= a; // d = d-a
    printf("d = %d \n", d);



    e *= a; // e = e*a
    printf("e = %d \n", e);



    f /= a; // f = f/a
    printf("f = %f \n", f);



    g %= a; // g = g%a
    printf("g = %d \n", g);



    // atama operatörlerinde tek bir değer değer de değiştirebilir.

    int z;

    z = a;
    printf("z = %d \n", z);

    z += a; // z = z+a
    printf("z = %d \n", z);

    z -= a; // z = z-a
    printf("z = %d \n", z);

    z *= a; // z = z*a
    printf("z = %d \n", z);

    z /= a; // z = z/a
    printf("z = %d \n", z);

    z %= a; // z = z%a
    printf("z = %d \n", z);

    return 0;
}