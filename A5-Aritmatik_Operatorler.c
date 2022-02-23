#include <stdio.h>

int main () {


    //aritmatik öperatörler

    //+ (ekleme)
    //- (çıkarma)
    //* (çarpma)
    // / (bölme)
    // % (modlüller)
    //++ (sayı değerini bir artırma)
    //-- (sayı değerini bir azaltma)
    

    int x = 5;

    int y = 2;

    int z = x + y;

    printf ("%d \n", z);

    // bölmede vb integerde tutarsan tam sayı olduğundan dolayı hata verecektir

    // bu durumda inti değiştirmemiz gerekir float veya double olarak değiştirebiliriz. 
    // cyi değiştirmemiz gerekiyor ancak a ve b int kalabilir bunun yerine aşağıdakini yapıyoruz.
    //Mod alama operatörü sadece int veri tipi ile olur. 
    //Çünkü mod alma işlemi bitsel bir işlemdir. 
    //Float türündeki sayılarla mod almak için math.h kütüphanesinde fmod() fonksiyonu bulunur.
    // int ve float veri tipindeki iki sayının toplama,çıkarma ve bölme işlemlerinin sonucu float veri tipinde olur.
    
    
    
    int a = 9;

    int b = 2;

    float c = a / (double) b;

    printf ("%f \n", c);


    // modller bölmeden kalanı söyler. yani tam bölünmeyen fazlalığı 10 elmayı 3
    //arkadaşa bölüştürdüğümüzde elimizde kalan 1 elmayı bize modül söyler.
    int d = 10;
    int e = 3;
    int f = d % e;

    printf("%d \n", f);


    // ++ arttırıyo -- eksiltiyo değeri buradaki 5 6 oluyo çıktıda. -- olsa 4 olurdu.
    int g = 5;
    
    g++;

    printf("%d \n ", g);





    return 0;



}