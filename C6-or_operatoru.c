#include <stdio.h>
#include <stdbool.h>

//Or operatoru (||) en azından bir tanesinin doğru olup olmadığını kontrol eder

int main (){

float temp = 25;

if (temp <=0 ||  temp >= 30){
    printf("the weather is good \n");
}
else{
    printf("the weather is bad \n");
}

//bir tane daha  or katarsan 3 tanesia rasında karşılaştırma yapabilrisin

    return 0;
}