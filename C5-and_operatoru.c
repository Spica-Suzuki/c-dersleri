#include <stdio.h>
#include <stdbool.h>

int main (){

// and (&&) operatörü iki durumun doğru olup olmadığını kontrol eder

    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny == true ){
        //sunny true yazmana gerek yok 1 veya sunny yazsan da olur
    printf("\n the weather is good\n");
    }
    else{
        printf("the weather is bad \n");
    }

    return 0;
}