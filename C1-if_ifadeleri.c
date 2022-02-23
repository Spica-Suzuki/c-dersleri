#include <stdio.h>
int main() {

    int age;
    printf("\n yasinizi giriniz \t");
    scanf("%d", &age);

    if( age >= 18) {
        printf("yetiskinsin tum vergileri say \n ");
    }

    else if(age == 0){
        printf("bebisss \n");
    }

    else if(age < 0){
        printf("oha amk \n");
    }

    else{
        printf("hayat cocuklara guzel \n");
    }

    // == iki şeyi karşılaştırma operatörü = değer atama
    // >= büyüktür ya da eşittir <= küçüktür ya da eşittir 

    return 0;
}