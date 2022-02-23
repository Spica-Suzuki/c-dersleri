#include <stdio.h>
int findmax (int x, int y) {
    return (x > y) ? x : y;
}

int main () {

int max = findmax(3,4);
printf("%d\n", max);
    return 0;
}