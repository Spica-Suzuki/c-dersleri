#include <stdio.h>
#include <math.h>

int main () {

double A = sqrt(9);
//square root yani karekök alıyo
double B = pow(2,4);
//üs alma işlemi
int C = round(3.14);
// yuvarlama işlemi
int D = ceil(3.14);
//en yakın üst tam sayıya yuvarlama yani 4 ceil tavan demek
int E = floor(3.99);
//en yakın alt sayıya yuvarlama yani 3 floor taban demek
double F = fabs(-100);
//bir sayının 0'a olan uzaklığı
double G = log(3);
// logaritma
double H = sin(45);
double I = cos(45);
double J = tan(45);

printf("\n %lf \n", A);
printf("\n %lf \n", B);
printf("\n %d \n", C);
printf("\n %d \n", D);
printf("\n %d \n", E);
printf("\n %lf \n", F);
printf("\n %lf \n", G);
printf("\n %lf \n", H);
printf("\n %lf \n", I);
printf("\n %lf \n", J);


    return 0;
}