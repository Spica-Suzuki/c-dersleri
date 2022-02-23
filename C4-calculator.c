#include <stdio.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;
    printf("\n islem yapmak istediginiz operatoru seciniz (+ - * /): ");
    scanf("%c", &operator);
    printf("numara biri giriniz: \n");
    scanf("%lf", &num1);
    printf("numara ikiyi giriniz: \n");
    scanf("%lf", &num2);
    switch(operator){
        default:
        printf("%c is not valid\n ", operator );
        break;
        case '+' :
        result = num1 + num2;
        printf("sonuc: %lf \n",result);
        break;
        case '-' :
        result = num1 - num2;
        printf("sonuc: %lf \n",result);
        break;

        case '*' :
        result = num1 * num2;
        printf("sonuc: %lf \n",result);
        break;

        case '/' :
        result = num1 / num2;
        printf("sonuc: %lf \n",result);
        break;

    }

return 0;
}