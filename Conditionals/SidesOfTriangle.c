#include<stdio.h>
int main(){
    int a;
    printf("Enter first side of a triangle = ");
    scanf("%d", &a);
    int b;
    printf("Enter second side of a triangle = ");
    scanf("%d", &b);
    int c;
    printf("Enter third side of a triangle = ");
    scanf("%d", &c);
    if (a+b>c && b+c>a && c+a>b)
    printf("Valid Triangle");
    else{
        printf("Not a Valid Triangle");
    }
    return 0;
}