#include <stdio.h>
int main () {

    //değişim = çok fazla "else if" yazmamamız için daha etkili bir alternatif
    //bir değerin birçok duruma karşı eşit olarak test edilmesini sağlar
    // break yazmazsan hepsini yazar. çıkmaz 
    
    char grade;
    printf("buraya bir harf gir \t");
    scanf("%c", &grade);

    switch(grade){
        case 'A' :
        printf("ya did really good\n");
        break;
        case 'B' :
        printf("ya did good\n");
        break;

        case 'C' :
        printf("idare eder\n");
        break;

        case 'D' :
        printf("kotu\n");
        break;

        case 'F' :
        printf("berbat\n");
        break;

    default:
     printf("harfler A B C D F \n");

    }


    return 0;
}