#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    //make a temporary variable & put the value of a
    a= a+b;    //5+4=9
    b= a-b;    //9-4=5
    a= a-b;    //9-5=4

    printf("The Swap Values are a is %d and b is %d", a, b);
 return 0;
}