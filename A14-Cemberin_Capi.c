#include <stdio.h>
#include <math.h>
int main (){

    const double PI = 3.141559;
    double yaricap;
    double cevre;
    double alan;
    printf("\n Yaricapi giriniz \n");

    scanf("%lf", &yaricap);

    cevre = 2 * PI * yaricap;

    printf("\n cevre : %lf \n", cevre);

    alan = PI * yaricap * yaricap;

    printf("cemberin alani: %lf \n", alan);

    return 0;
}