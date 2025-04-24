#include <stdio.h>
int main () {
    int x = 5;
    printf("%d\n", x);
    x = x + 4;
    printf("%d\n", x);
    x++; //post increment, first do the work then increment
    printf("%d\n", x);
    x--; //post decrement, first do the work then decrement
    printf("%d\n", x);
    x = x * 10;
    printf("%d\n", x);
    ++x; //pre increment, first do increment then do the work
    printf("%d\n", x);
    --x; //pre decrement, first do decrement then do the work
    printf("%d\n", x);
    return 0;
}