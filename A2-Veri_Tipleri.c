#include <stdio.h>
#include <stdbool.h>

int main () {
    char a = 'C';           // tek bir karakter %c
    char b[] = "supi";      // tek bir dize     %s
    float c = 3.141592;     // 4 bytes (32 bit hassasiyet) 6-7 basamak %f
    double d = 3.141592653589793; // 8 bytes (64 bit hassasiyet) 15-16 basamak  %lf

     bool e = true;       // 1 byte (true or false) %d

     char f = 100;        // 1 byte (-128 to +127) %d or %c
     unsigned char g = 255;  // 1 byte (0 to +255) %d or %c
    
     short int h = 32767    ;     // 2 bytes (-32.768 to +32.767) %d
     unsigned short int i = 65535; // 2 bytes (0 to +65;355) %d

    int j = 2147483647;         // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4294967295L; //4 bytes (0 to 4,294,967,295) %u

    long long int l = 9223372036854775807;    // 8bytes (-9 kentilyon to +9 kentilyon) &lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 kentilyon) %llu
    
    //printf("%c\n", a);        //char
    //printf("%s\n", b);        //character array
    //printf("%0.15f\n", c);        //float
    //printf("%0.15lf\n", d);       //double
    //printf("%d\n", e);        //bool
    //printf("%d\n", f);        //numara degerine göre char
    //printf("%d\n", g);        //numara degerine göre unsigned char
    printf("%d\n", h);        //short int
    printf("%d\n", i);        //unsigned short int
    printf("%d\n", j);        //int
    printf("%u\n", k);        //unsigned int
    printf("%lld\n", l);     //long long int
    printf("%llu\n", m);      //unsigned long long int


    //printf("");
    //printf("%");

    // default olarak bütün veri tipleri signed chardır ama signed yazmaya gerek yoktur
    //short int yerine short yazsan da oluyor
    // long int yerine int yazsak da oluyo long long yazmak lazım ama
    // eğer karakter fazla ise en küçük değere atar 
    // U kullanmamazın sebebi çok büyük bir numara olduğu için görüntüleyemiyor
} 