#include <stdio.h>
#include <ctype.h>

int main (){

char unit;
float temp;

//toupper c dilindeki büyük küçük harf hassasiyetini giderir

printf("\n is the temperature C or F \t");
scanf("%c", &unit);

unit = toupper(unit);


if (unit == 'C')
{
    printf("\n C degerini yaziniz \t");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("the temp in F is %.1f \n ", temp);
}

else if (unit == 'F')
{
    printf("\n F degerini yaziniz \t");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) /9;
    printf("celcius olarak sonuc %1.f\n ", temp);
}

else ("\n duzgun yaz");










}