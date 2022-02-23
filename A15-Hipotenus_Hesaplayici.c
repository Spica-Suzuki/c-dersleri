#include <stdio.h>
#include <math.h>

int main() {
    double A;
    double B;
    double C;
    printf("A degerini giriniz\n");
    scanf("%lf", &A);
    
    printf("B degerini giriniz\n");
    scanf("%lf", &B);
    
    C = sqrt(A*A +B*B);
    
    printf("hipotenus %lf dir \n", C);
    return 0;
}