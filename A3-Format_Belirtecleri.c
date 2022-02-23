#include <stdio.h>
int main () {

        // format belirteci % =  görüntülenecek olan veri tipini formatlar ve biçimlendirir
        // %c = karakter
        // %s = sting (karakter dizesi)
        // %f = float
        // %lf = double
        // %d = integer (tamsayı)

        // &.1 = ondalık hassasiyet
        // %1 = minimum alan genişliği
        // %- = sol kısım

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 0 : $ %f \n", item1);
    printf("item 1 : $ %.2f \n", item1);
    printf("item 2 : $ %-8.2f \n", item2);
    printf("item 3 : $ %8.2f \n", item3);







return 0;
}