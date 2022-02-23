#include <stdio.h>
#include <string.h>

int main (){

char name[25]; //bytes
int age;

printf(" adin ne \t");

//scanf("%s", &name);

fgets(name, 25, stdin);

//fgets kullanıyoruz çünkü space ile ikinci ad yazılmıyo
//eğer fgets kullanırsan 1 boş satır olur
//bunun önüne geçmek için string.h ekliyoruz ve ltına şunu yazıyoruz:

name[strlen (name)-1] = '\0';

printf(" senin adin %s \n ", name);

printf(" yasiniz giriniz \t ");

scanf("%d", &age);

printf(" sen %d yasindasin \n", age);

    return 0;
}