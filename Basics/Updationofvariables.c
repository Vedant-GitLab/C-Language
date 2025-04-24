#include<stdio.h>
int main () {
    int x;
    x = 5;
    printf("%d\n", x); // x = 5
    x = 10 + x;
    printf("%d\n", x); // x = 15
    x = 100 + x;
    printf("%d\n", x); // x = 115
    x = 100 * x;
    printf("%d\n", x); // x = 11500
    x = 23000 / x;
    printf("%d\n", x); // x = 2
    return 0;
}