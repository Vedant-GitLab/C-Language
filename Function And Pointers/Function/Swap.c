#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    //make a temporary variable & put the value of a
    int c = a;
    a = b;
    b = c;

    printf("The Swap Values are a is %d and b is %d", a, b);
 return 0;
}