#include <stdio.h>

/* 

Komut satiri argumanlari

Argc = argument count demektir. Argumanin sayisini bize ifade eder.
Argv = argument values/vector demektir. Argumanin degerini bize ifade eder.

Envp = environment pointer demektir.  Kodu calistirdigimiz zaman bize o ortami soyler ve bu sayede
eger ortam degisirse ona gore ozellestirilmis komutlar calistirilabilir

Kod calistirildiginda kodun kendisi bir arguman oldugu icin argc otomatik olarak 1 olur.
Argv ise otomatik olarak kodun calistirilma argumanidir. Ornegin kodu calistirmak icin yazilan ./ ilk argumandir
argv[0] bu nedenle ./ olur.

*/

 int main (int argc, char *argv[], char **envp) {

 printf("\n yurutulen arguman sayisi toplami = %d", argc);
 printf("\n yurutulen komutun adi= %s", argv[0]);
int i;
 for (i=1; i< argc; i++) {
     printf("\n arguman%d=%s", i, argv[i]);
 }

i=0;
while (*envp != NULL) {
    i++;
    printf ("\n ortam degiskeni %d => %s",i, *(envp++));
 }

 printf("\n");
 return 0;
 }
